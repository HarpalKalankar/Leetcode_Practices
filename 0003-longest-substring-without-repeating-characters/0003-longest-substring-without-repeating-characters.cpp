class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> consist;
        int l = 0 ; 
        int res = 0 ; 
        for(int r = 0 ; r < s.size() ; r++){
            while (consist.find(s[r]) != consist.end()){
                consist.erase(s[l]);
                l++;
            }
            consist.insert(s[r]) ;
            res = max(res,r - l + 1) ;

        }
        return res;
    }
};