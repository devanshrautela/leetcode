class Solution {
public:
    bool isSubsequence(string s, string t) {
        int Sindex=0;
        for(int Tindex=0; Tindex<t.length() && Sindex<s.length(); Tindex++){
            if(t[Tindex]==s[Sindex]) Sindex++; 
        }
        return Sindex==s.length();
    }
};