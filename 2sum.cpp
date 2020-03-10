#include<bits/stdc++.h>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map<int,int>m;
        vector<int> res;
        int diff=0;
        for(int i=0;i<nums.size();i++){
            diff=target-nums[i];
            map<int,int>::iterator it;
            it=m.find(diff);
            if(it!=m.end()){
                res.push_back(it->second);
                res.push_back(i);
                return res;
                
            }else{
                m[nums[i]]=i;
            }
        }
       return res;
   



        
        
        
        
        
    }
};
