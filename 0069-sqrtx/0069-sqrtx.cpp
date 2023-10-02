class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        if(x==0) return x;
        for(long i=0; i<=x; i++){
            if(i*i<=x) ans=i;
            else break;
        }
        return ans;
    }
};