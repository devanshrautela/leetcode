class Solution {
public:
    bool isPalindrome(int x) {
        string ans=to_string(x);
        reverse(ans.begin(), ans.end());
        long result=stol(ans);
        if(x==result) return true;
        else return false;
    }
};