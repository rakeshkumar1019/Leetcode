class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
  int size=nums.size();
  int subsets=(1<<size);//2^size
   for(int i=0;i<subsets;i++){
    vector<int> temp;
    for(int j=0;j<size;j++){
      if(i&(1<<j)){
        temp.push_back(nums[j]);
      }
    }
    
    res.push_back(temp);
  }
   
  return res;
    }
};
