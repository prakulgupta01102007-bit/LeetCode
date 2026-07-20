class Solution {
public:
    int trailingZeroes(int n) {
        int k=5;
        int t=n;
        int sum =0;
        while(t>0) {
          if(n/k >0) {
            sum += n/k;
            k = k*5;
          }
          else {
            break;
          }
        }
        return (sum);
    }
};