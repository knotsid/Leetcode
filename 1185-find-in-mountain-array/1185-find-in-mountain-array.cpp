/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int t, MountainArray& arr) {
        auto peak = 0, r = arr.length() - 1;
        while (peak < r) {
            int m = (peak + r) / 2;
            if (arr.get(m) > arr.get(m + 1)) r = m;
            else peak = m + 1;
        }
        auto i = bSearch(arr, t, 0, peak);
        return i != -1 ? i : bSearch(arr, t, peak + 1, arr.length() - 1, false);
    }
    int bSearch(MountainArray& arr, int t, int st, int end, bool asc = true) {
        while (st <= end) {
            int mid = (st + end) / 2;
            auto val = arr.get(mid);
            if (val == t) return mid;
            if (asc == val < t) st = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }
};