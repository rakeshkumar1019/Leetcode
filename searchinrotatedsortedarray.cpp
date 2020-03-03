class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto result = find(nums.begin(), nums.end(), target);
        if ( result == nums.end()) return -1;
        else return distance (nums.begin(), result); 
    }
};
