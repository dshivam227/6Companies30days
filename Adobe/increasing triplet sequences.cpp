    // Link: https://leetcode.com/problems/increasing-triplet-subsequence/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;

        int digit1 = INT_MAX;       int digit2 = INT_MAX; 

        for(auto& c : nums){
            if(c <= digit1)
             digit1 = c; 
            else if(c <= digit2) 
            digit2 = c; 
            else return true;
        }

        return false;
    }
};