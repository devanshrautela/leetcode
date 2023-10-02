class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return x;
        long high=x;
        long low=1;
        long ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if((mid*mid)<=x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};