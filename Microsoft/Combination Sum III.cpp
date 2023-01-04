// Link: https://leetcode.com/problems/combination-sum-iii/description/
class Solution {
public:

void helper(int index,int sum,int n, vector<vector<int>>&v, vector<int>&v1,int k)
{
if( sum==n&& k==0){
v.push_back(v1);
return;}

if(sum>n)
return;
for( int i=index;i<=9;i++){
    if( i>n){
        return;    }
        v1.push_back(i);
        helper(i+1,sum+i,n,v,v1,k-1);
        v1.pop_back();
}


}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v1;
         vector<vector<int>>v;
         helper(1,0,n,v,v1,k);
         return v;
    }
};