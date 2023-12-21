function findMin(nums: number[]): number {
  let left = 0;
  let right = nums.length - 1;
  let mid = 0;

  while (left < right) {
    mid = Math.floor(left + (right - left) / 2);
    if (nums[mid] < nums[right]) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }

  return nums[left];
}
