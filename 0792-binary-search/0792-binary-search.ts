function solve(nums: number[], target: number, st:number, end: number):number{
    if(st>end) return -1;

    let mid = Math.floor((st+end)/2);
    if(nums[mid]==target)  return mid;
    else if(nums[mid]<target) return solve(nums, target, mid+1, end);
    else return solve(nums, target, st, mid-1);
}

function search(nums: number[], target: number): number {
    let st = 0, end = nums.length - 1;
    // while (st <= end) {
    //     let mid = Math.floor((st+end)/2);
    //     if(nums[mid]==target) return mid;
    //     else if(nums[mid]<target) st=mid+1;
    //     else end = mid -1;
    // }
    // return -1;
    let ans = solve(nums, target, st, end)
    return ans;
}
