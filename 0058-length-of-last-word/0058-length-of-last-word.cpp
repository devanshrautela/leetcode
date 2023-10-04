class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int ans=INT_MIN;
        for(int i=0; i<s.length(); i++){
            if(isalpha(s[i])){
                count++;
            }
            else{
                if(count!=0) ans=count;
                count=0;
            }
        }
        if(count!=0) ans=count;
        return ans;
    }
};