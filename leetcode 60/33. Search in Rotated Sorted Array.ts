function search(nums: number[], target: number): number {
    let left = 0;
    let right = nums.length - 1;
    let mid = Math.floor((left + right) / 2);
    while (left <= right) {
        if (nums[mid] === target) return mid;
        if (nums[left] <= nums[mid]) {
        if (nums[left] <= target && target <= nums[mid]) right = mid - 1;
        else left = mid + 1;
        } else {
        if (nums[mid] <= target && target <= nums[right]) left = mid + 1;
        else right = mid - 1;
        }
        mid = Math.floor((left + right) / 2);
    }
    return -1;
}
