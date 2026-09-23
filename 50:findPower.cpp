class Solution {
public:
    double findPow(double x, int n){
        if(n==0) return 1;
        double ans = findPow(x,n/2);
        if(n%2==0) return ans*ans;
        return ans*ans*x;
    }
    double myPow(double x, int n) {
        if(n==0) return 1;
        else if(n>0) return findPow(x,n);
        else{
            long nn = n;
            nn*=(-1);
            return 1/findPow(x,n);
        }
    }
};
