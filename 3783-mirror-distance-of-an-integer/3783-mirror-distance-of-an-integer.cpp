class Solution {
public:
    int mirrorDistance(int n) {
        int n2=0;
        int n3 =n;
        int n4 =n;
        int k=0;

        while(n4 >0) {
        n4 = n4/10;
        k++;

        }
        while(n3>0) {
        n2 += (n3%10)*pow(10,k-1);
        k--;
        n3 = n3/10;
        }

        if(n2-n >=0) {
            return (n2-n);
        }
        else {
            return (n-n2);
        }
    }
};