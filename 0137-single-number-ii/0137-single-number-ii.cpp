class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        unordered_map<int,int>m;
        for(auto it:nums) {
            m[it]++;
        }
        for(int val:nums) {
        if(m[val] > 2) {
            continue;
        }
        else {
            x = x^val;
        }
        }
        return x;
    }
};