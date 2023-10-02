class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        int high=x;
        int low=1;
        int mid=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(((long)mid*(long)mid)<=(long)x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};