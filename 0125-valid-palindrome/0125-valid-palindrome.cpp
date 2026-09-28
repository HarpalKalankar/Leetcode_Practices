class Solution {
public:
    bool isPalindrome(string s) {
        string palim = "" ; 
        for(char c : s){
            if(isalnum(c)){
                palim += tolower(c) ;
            }
        }
        return palim == string(palim.rbegin(), palim.rend());
    }
};