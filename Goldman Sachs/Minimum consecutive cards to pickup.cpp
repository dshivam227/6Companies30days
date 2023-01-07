// Link:https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/description/ 
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
       unordered_map<int,vector<int>>m;
        
        for(int i=0;i<cards.size();i++){
            m[cards[i]].push_back(i);
            
        }
        int res=INT_MAX;
        for( auto &x:m){
            for( int i=0;i<x.second.size()-1;i++){
                res=min( res,x.second[i+1]-x.second[i]+1);
            }
            
        }
        return res==INT_MAX?-1:res;
    }
};