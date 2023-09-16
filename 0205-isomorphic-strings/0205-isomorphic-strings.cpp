class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int count1[256]={0};
        int count2[256]={0};
        if(s.length()!=t.length()) return false;
        for(int i=0; i<s.length(); i++){
          int char1=s[i];
          int char2=t[i];
          if(count1[s[i]]!=count2[t[i]]) return false;
          count1[char1]=i+1;
          count2[char2]=i+1;
        }
        return true;
    }
};