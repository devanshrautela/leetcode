class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (int i = 0; i < operations.size(); i++) {
            for (int j = 0; j < operations[i].length(); j++) {
                if (operations[i][j] == '-') {
                    ans -= 1;
                    break;
                } else if (operations[i][j] == '+') {
                    ans += 1;
                    break;
                }
            }
        }
        return ans;
    }
};
