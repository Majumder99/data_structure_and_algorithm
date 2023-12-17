function wordBreak(s: string, wordDict: string[]): boolean {
  const dp: boolean[] = new Array(s.length + 1).fill(false);
  dp[0] = true;
  for (let i = 0; i < s.length; i++) {
    if (!dp[i]) continue;
    for (let j = i + 1; j <= s.length; j++) {
      if (wordDict.includes(s.slice(i, j))) dp[j] = true;
    }
  }
  return dp[s.length];
}
