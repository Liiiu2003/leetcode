class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if ( x == 1 || ( x != 0 && n == 0 ) ) return 1;
        if ( x == -1 )  return n % 2 == 0 ? 1 : -1; 
        if ( n >= INT_MAX || n <= INT_MIN ) return 0;
        for ( int i = 0 ; i < abs(n) ; i++ ){
            ans = ans * x;
        }
        
        return n < 0 ? 1/(ans) : ans;
    }
};
