class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        int start=0;
        int last=s.length()-1;
        while(start<=last){
            char currfirst=s.at(start);
            char currlast=s.at(last);
            if(!isalnum(currfirst)) start++;
            else if(!isalnum(currlast)) last--;
            else{
                if(tolower(currfirst)!=tolower(currlast)) return false;
                start++;
                last--;
            }
        }
        return true;
    }
};