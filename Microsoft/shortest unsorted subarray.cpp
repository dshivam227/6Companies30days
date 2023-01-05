// Link: https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
vector<int>v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
       int n = nums.size(),start=0,end=n-1;
        while( start<n and nums[start]==v[start]){
            start++;
        }
         while( end>start and nums[end]==v[end]){
            end--;
        }
        
        return end-start+1;
    }
};