class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int leastPrice = prices[0];
        for(int i=1; i<prices.length; i++){
            maxProfit = Math.max(maxProfit, prices[i]-leastPrice);
            leastPrice = Math.min(prices[i], leastPrice);
        }
        return maxProfit;
    }
}