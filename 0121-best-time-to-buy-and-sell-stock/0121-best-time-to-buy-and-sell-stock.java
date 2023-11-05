class Solution {
    public int maxProfit(int[] prices) {
        int currentPrice = 0;
        int maxProfit = 0;
        int leastPrice = Integer.MAX_VALUE;
        for(int i=0; i<prices.length; i++){
            if(leastPrice > prices[i]){
                leastPrice = prices[i];
            }
            currentPrice = prices[i] - leastPrice;
            if(currentPrice > maxProfit){
                maxProfit = currentPrice;
            }
        }
        return maxProfit;
    }
}