class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> results;
        int no1=s[1]-'0', no2=s[4]-'0', max_n=INT_MIN, min_n=INT_MAX;
        char a=s[0], b=s[3];
        max_n=max(no1,no2);
        min_n=min(no1,no2);
        for(char j=a; j<=b; j++){
            for(int i=min_n; i<=max_n; i++){
                results.push_back(j+to_string(i));
            }
        }
        return results;
    }
};