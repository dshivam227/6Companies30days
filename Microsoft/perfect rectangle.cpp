// Link: https://leetcode.com/problems/perfect-rectangle/description/

class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        int count = 0;
        map<pair<int,int>,int> mpp;
        for(auto &it : rectangles){
            mpp[{it[0], it[1]}]++;

            mpp[{it[2], it[3]}]++;
            mpp[{it[0], it[3]}]--;
            mpp[{it[2], it[1]}]--;

        }

        

        for(auto it= mpp.begin() ; it != mpp.end() ;it++){

            if(abs(it->second) == 1){
                count++;
            }
            
            
            else if(abs(it->second != 1) && it->second != 0){
                return false;
            }
            
        }
        return count == 4;
    }
};