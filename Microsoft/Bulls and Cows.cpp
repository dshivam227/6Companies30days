// Link: https://leetcode.com/problems/bulls-and-cows/description/
class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0,cow=0;
        int n=secret.size();
        vector<int>v(10),v1(10);

        string st="";

        for(int i=0;i<secret.size();i++){
            if( secret[i]==guess[i])
            bull++;
            else {
                v[secret[i]-'0']++;
                v1[guess[i]-'0']++;

            }
        }
        for(int i=0;i<10;i++){
            cow+=min(v[i],v1[i]);
        }

        st=st+ to_string(bull);
        st+='A';
        st=st+ to_string(cow);
         st+='B';
        return st;
    }
};