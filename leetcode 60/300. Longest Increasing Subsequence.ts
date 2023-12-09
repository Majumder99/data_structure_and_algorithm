function lengthOfLIS(nums: number[]): number {
  const n = nums.length;
  const dp = new Array(n).fill(1);
  let max = 1;
  for (let i = 1; i < n; i++) {
    let maxVal = 0;
    for (let j = 0; j < i; j++) {
      if (nums[i] > nums[j]) maxVal = Math.max(maxVal, dp[j]);
    }
    dp[i] = maxVal + 1;
    max = Math.max(max, dp[i]);
  }
  return max;
}
