class Solution {
    public int rev(int num){
        int reverse=0;
        int lastDigit=0;
        while(num>0){
            lastDigit=num%10;
            reverse=(reverse*10)+lastDigit;
            num/=10;
        }
        return reverse;
    }
    public boolean isSameAfterReversals(int num) {
        return num==rev(rev(num));
    }
}