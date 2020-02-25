#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool reachingPoints(int a, int b, int c, int d) {
            if(a>c || b>d)
                return false;
            if(a==c && b==d)
                return true;
            if(c>d){
                int sub=(c-a)/d;
                if(sub==0)
                    return false;
                return reachingPoints(a,b,c-sub*d,d);
            }
            else
            {
                int sub=(d-b)/c;
                if(sub==0)
                    return false;
                return reachingPoints(a,b,c,d-sub*c);
            }
                    
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(reachingPoints(a,b,c,d)==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
}
