class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int c;
        for(int i=0;i<nums.size();i++) {
            c = target - nums[i];
            if(m.find(c) != m.end()) {
                return {m[c],i};
            }
            m[nums[i]] = i;
        }
        return {-1,-1};
    }
};