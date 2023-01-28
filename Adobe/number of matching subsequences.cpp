Link: https://leetcode.com/problems/number-of-matching-subsequences/description/
// This is a string problem. We need to find the number of words that are subsequences of a string. We can do this by using a map to keep track of the characters in the string and their positions. We can use the following recurrence relation:

class Solution {
public:
    bool check(string &s, string &word)
    {
        int i=1;
        int j=s.find(word[0]);
        if(j==-1)
            return false;
        while(i<word.length())
        {
            j=s.find(word[i],j+1);
            if(j==-1)
                return false;
            i++;
        }
        return true;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int res=0;
        for(auto word:words)
        {
            if(check(s,word))
                res++;
        }
        return res;
    }
};