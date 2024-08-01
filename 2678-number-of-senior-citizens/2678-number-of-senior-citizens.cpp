class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto& check:details){
            int age=stoi(check.substr(11,2));
            if(age>60){
                count++;
            }
        }
        return count;
    }
};