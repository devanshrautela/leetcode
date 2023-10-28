class Solution {
    public boolean isSameAfterReversals(int num) {
        String a = new StringBuilder(String.valueOf(num)).reverse().toString();
        int b=Integer.parseInt(a);
        a = new StringBuilder(String.valueOf(b)).reverse().toString();
        b = Integer.parseInt(a);
        return num==b;
    }
}