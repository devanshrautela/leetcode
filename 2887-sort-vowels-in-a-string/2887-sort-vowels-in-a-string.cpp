class Solution {
public:
    bool isVowel(char ch){
        ch = toupper(ch);
        return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    }
    string sortVowels(string s) {
        vector<char>vowels;
        for(int i=0; i<s.length(); i++){
            if (isVowel(s[i]))  vowels.push_back(s[i]);
        }
        sort(vowels.begin(),vowels.end());
        int index=0;
        for(int i=0; i<s.length(); i++){
            if(isVowel(s[i])) s[i]=vowels[index++]; 
        }
        return s;
    }
};