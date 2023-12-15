function rob(nums: number[]): number {
  if (nums.length === 1) return nums[0];
  return Math.max(
    robRange(nums, 0, nums.length - 2),
    robRange(nums, 1, nums.length - 1)
  );
}

function robRange(nums: number[], start: number, end: number): number {
  if (start === end) return nums[start];
  let first = nums[start],
    second = Math.max(nums[start], nums[start + 1]);
  for (let i = start + 2; i <= end; i++) {
    const temp = second;
    second = Math.max(first + nums[i], second);
    first = temp;
  }
  return second;
}
