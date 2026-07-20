class Solution {
public:
int sum(int n) {
if(n==0) {
    return 0;
}
else {
    return (n%10 + sum(n/10));
}

}
    int addDigits(int num) {
        int n = sum(num);
        while(n>10) {
        n = sum(n);
        }
        return n;
    }
};