function shipWithinDays(weights: number[], days: number): number {
  let left = Math.max(...weights);
  let right = weights.reduce((a, b) => a + b);
  while (left < right) {
    const mid = Math.floor((left + right) / 2);
    let need = 1;
    let cur = 0;
    for (const weight of weights) {
      if (cur + weight > mid) {
        need++;
        cur = 0;
      }
      cur += weight;
    }
    if (need <= days) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }
  return left;
}
