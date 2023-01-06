#Link: https://leetcode.com/problems/max-points-on-a-line/description/

class Solution {
public:
    int maxPoints(vector<vector<int>>& point) {
       int n=point.size(),m=2;
       if( n<=2)
       return n;
    for(int i=0;i<n;i++){
        for( int j=i+1;j<n;j++){
            int count=2;
            for( int k=0;k<n;k++){
                if( k!=i && k!=j){
                    if((point[j][1]-point[i][1])* (point[i][0]-point[k][0])== (point[i][1]-point[k][1])* (point[j][0]-point[i][0]))
                    count++;
                    // cout<<count<<endl;
                }
            }
            m=max(m,count);
        }
    }
         return m;
    }
};