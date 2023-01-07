// Link: https://leetcode.com/problems/number-of-boomerangs/description/
class Solution {
public:
    bool isPossible(vector<int>& nums) {
        // int i=0;
        if(nums.size()<3)
        return false;

                map<int,int> mp,m1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i :nums){
            if(mp[i]==0){
                continue;
                }
            mp[i]--;
    if(m1[i-1]>0){
                m1[i-1]--;
                m1[i]++;
            }
    else if(mp[i+1]!=0 && mp[i+2]!=0){
                mp[i+1]--;
                mp[i+2]--;
                m1[i+2]++;
            }
            else{
                return false;
                }
        }
        return true;
    }
};