function maxProfit(prices: number[]): number {
    let min = prices[0];
    let max = 0;
    for (let i = 1; i < prices.length; i++) {
        const price = prices[i];
        if (price < min) {
        min = price;
        } else {
        const profit = price - min;
        if (profit > max) {
            max = profit;
        }
        }
    }
    return max;
}
