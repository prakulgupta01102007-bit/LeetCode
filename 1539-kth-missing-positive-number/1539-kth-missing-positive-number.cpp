class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=0;
        int t=1;
        for(int i=0;i<arr.size();i++) {
            if(t == arr[i]) {
                t++; 
            }
            else {
                n++; 
            if (n == k) { 
                return t; 
            }
            t++; 
            i--; 
            }
        }
        t--;
        while(n < k) {
            t++;
            n++;
        }
        return t;
    }
};