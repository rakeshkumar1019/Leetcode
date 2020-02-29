#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> permut(vector<int> &temp){
vector<vector<int>> myvec;

int n=temp.size();
sort(temp.begin(),temp.end());

do{
  vector<int> t;
  for(int i=0;i<n;i++){
    t.push_back(temp[i]);
  }
myvec.push_back(t);

}while(next_permutation(temp.begin(),temp.end()));

return myvec;
}

int main(){
  vector< vector<int>>myvecti;
  int n;
  cin>>n;
  vector<int> temp;
  for(int i=0;i<n;i++){
     int t;
     cin>>t;
     temp.push_back(t);
  }
cout<<"inputes"<<endl;
for(int i=0;i<n;i++){
  cout<<temp[i]<<" ";
}
cout<<endl;

myvecti=permut(temp);

int bign=myvecti.size();
for(int i=0;i<bign;i++){
  for(int j=0;j<n;j++){
    cout<<myvecti[i][j]<<" ";
  }
  cout<<endl;
}



}
