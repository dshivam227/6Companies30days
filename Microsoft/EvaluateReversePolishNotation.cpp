// Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

#define ll long long
class Solution {
public:
    int evalRPN(vector<string>& token) {
     stack<string>s;
     for( int i=0;i<token.size();i++){
         if( token[i]=="+"){
                ll x= stol(s.top());s.pop();
                ll y= stol (s.top());
                s.pop();
                 s.push(to_string(y + x));
         }
         else if(  token[i]=="-")
         {
             ll x= stol (s.top());
                s.pop();
                ll y= stol (s.top());
                s.pop();
                 s.push(to_string(y - x));
         }
         else if(  token[i]=="*")
         {
             ll x= stol (s.top());
                s.pop();
                ll y= stol (s.top());
                s.pop();
                 s.push(to_string(y * x));
         }
           else if(  token[i]=="/")
         {
             ll x= stol (s.top());
                s.pop();
                ll y= stol (s.top());
                s.pop();
                 s.push(to_string(y / x));
         }
         else {
             s.push(token[i]);

         }
         
     }
     return stol(s.top());   
    }
};