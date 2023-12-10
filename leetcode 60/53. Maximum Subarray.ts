function maxSubArray(nums: number[]): number {
    let max = nums[0];
    let sum = 0;
    for (let i = 0; i < nums.length; i++) {
        sum += nums[i];
        max = Math.max(sum, max);
        if (sum < 0) sum = 0;
    }
    return max;
}
