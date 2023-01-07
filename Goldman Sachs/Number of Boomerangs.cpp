// Link: https://leetcode.com/problems/number-of-boomerangs/description/
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
    int n=points.size(),count=0;
  
        for( int i=0;i<n;i++){
              map<int,int>mp;
            for( int j=0;j<n;j++){
                int dist=((points[i][0]-points[j][0])*(points[i][0]-points[j][0]))+ ((points[i][1]-points[j][1])*(points[i][1]-points[j][1]));
                mp[dist]++;

            }
             for( auto c: mp){
            if( c.second)
            count+=(c.second*(c.second-1)); 
        }
              }
        return count;
    }
};