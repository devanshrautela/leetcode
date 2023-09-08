class Solution {
public:
    string sortVowels(string s) {
        vector<int>index;
        vector<char>vowels;
        for(int i=0; i<s.length(); i++){
            char c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                index.push_back(i);
                vowels.push_back(s[i]);
            }
        }
        if(vowels.size()==0) return s;
        sort(vowels.begin(),vowels.end());
        for(int j=0; j<index.size(); j++){
            s[index[j]]=vowels[j];
        }
        return s;
    }
};