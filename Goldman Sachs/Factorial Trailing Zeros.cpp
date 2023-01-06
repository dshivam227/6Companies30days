// #Link: https://leetcode.com/problems/factorial-trailing-zeroes/description/

class Solution {
public:
    int trailingZeroes(int n) {
         int res=0;
        while(n){
            n/=5;
            res+=n;
        }
        return res;
    }
};