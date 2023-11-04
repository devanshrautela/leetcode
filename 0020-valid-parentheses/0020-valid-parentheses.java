class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for(char i : s.toCharArray()){
            if(i=='(' || i=='{' || i=='['){
                stack.push(i);
                continue;
            }
            else if(stack.isEmpty() || !isMatching(i, stack.peek())){
                return false;
            }
            stack.pop();
        }
        return stack.isEmpty();
    }
    public boolean isMatching(char i, char top){
        return (i=='}' && top=='{') || (i==']' && top=='[') || (i==')' && top=='(');
    }
}