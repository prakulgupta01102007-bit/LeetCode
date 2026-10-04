class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() ==0) {
            return 0;
        }
        if(nums.size() ==1) {
            return 1;
        }
        int st =0;
        int end =1;
        int k=1;
        for(int i=0;i<nums.size()-1;i++) {
        if(nums[st] == nums[end]) {
            nums[st] = INT_MAX; 
            st++;
            end++;
        }
        else {
            k++;
            st++;
            end++;
        }
    }
    sort(nums.begin(),nums.end());
    return k;
    }
};