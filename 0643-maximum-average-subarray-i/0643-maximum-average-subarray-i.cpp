class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++) {
            sum =sum + nums[i];
        }
        double avg = sum/k;
        double m = avg;
        int f = k;
        for(int i=0;i<nums.size()-k;i++) {
           sum = sum - nums[i] +nums[f];
           f++;
           avg = sum/k;
           m = std::max(avg,m);
        } 
        return m;
    }
};