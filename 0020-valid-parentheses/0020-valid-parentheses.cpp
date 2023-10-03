class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        for(char c : s){
            if(c=='(' || c=='[' || c=='{'){
                bracket.push(c);
            }else{
                if(bracket.empty() || !isMatching(bracket.top(),c)){
                    return false;
                }
                bracket.pop();
            }
        }
        return bracket.empty();
    }
    private:
    bool isMatching(char open, char close){
        return (open=='(' && close==')' || open=='[' && close==']' || open=='{' && close=='}');
    }
};