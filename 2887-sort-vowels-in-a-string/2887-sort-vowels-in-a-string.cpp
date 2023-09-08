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
        if(vowels.size()==0) return s;
        sort(vowels.begin(),vowels.end());
        int index=0;
        for(int j=0; j<s.length(); j++){
            if(isVowel(s[j])) s[j]=vowels[index++]; 
        }
        return s;
    }
};