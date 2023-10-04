class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxZero=INT_MIN;
        int maxOne=INT_MIN;
        int currentZero=0;
        int currentOne=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0'){
                currentZero++;
                currentOne=0;
            }
            else{
                currentOne++;
                currentZero=0;
            }
            maxZero=max(maxZero, currentZero);
            maxOne=max(maxOne, currentOne);
        }
        return maxOne>maxZero;
    }
};