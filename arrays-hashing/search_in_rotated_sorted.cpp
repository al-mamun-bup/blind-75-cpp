class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        while(lo <= hi){
            int mid = (lo+hi) / 2;
            if(nums[mid] == target) return mid;
            // if left part is sorted
            // identify which part is sorted and check if the target lies in that part or not. If it does, we can discard the other half of the array and continue searching in the sorted half. If it doesn't, we search in the other half.
            if(nums[lo] <= nums[mid]){
                if(nums[lo] <= target and target <= nums[mid]){
                    hi = mid - 1;
                }else{
                    lo = mid + 1;
                }
            }else{
                if(nums[mid] <= target && target <= nums[hi]){
                    lo = mid + 1;
                }else{
                    hi = mid - 1;
                }
            }
        }
        return -1;
    }
};