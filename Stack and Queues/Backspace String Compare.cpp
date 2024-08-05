class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="",s2="";
        for(auto i:s){
            if(i=='#' && !s1.empty()){
                s1.pop_back();
            }
            else if(i=='#') continue;
            else
                s1+=i;
        }
        for(auto i:t){
            if(i=='#' && !s2.empty()){
                s2.pop_back();
            }
            else if(i=='#') continue;
            else
                s2+=i;
        }
        return s1==s2;
    }
};
