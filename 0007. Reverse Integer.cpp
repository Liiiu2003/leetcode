class Solution {
public:
    int reverse(int x) {

        long long ans = 0;
        while( x != 0 ){
            int digit = x % 10;
            ans = ans *10 + digit;
            if ( ans > numeric_limits<int>::max() || ans < numeric_limits<int>::min() ) return 0;
            x /= 10;
        }

        return ans;
    }
};
