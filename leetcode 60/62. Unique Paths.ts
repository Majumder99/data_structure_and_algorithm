function uniquePaths(m: number, n: number): number {
  const dp: number[][] = Array.from({ length: m }, () =>
    Array.from({ length: n }, () => 0)
  );
  dp[0][0] = 1;
  for (let i = 1; i < m; i++) {
    dp[i][0] = 1;
  }
  for (let j = 1; j < n; j++) {
    dp[0][j] = 1;
  }
  for (let i = 1; i < m; i++) {
    for (let j = 1; j < n; j++) {
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }
  }
  console.log(dp);
  return dp[m - 1][n - 1];
}
