class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        int i=0;
        int mid;
        while(st<=end) {
        mid = st + (end-st)/2;
        if(target>nums[mid]) {
            st = mid+1;
        }
        else if(target<nums[mid]) {
            end = mid-1;
        }
        else if(target==nums[mid]) {
            return mid;
        }
        i++;
        }
        return st;
    }
};