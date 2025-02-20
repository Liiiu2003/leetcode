class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        bool head = true;
        int sign = 0;
        for ( int i = 0 ; s[i] != '\0'; i++ ) {
            if ( s[i] >= '0' && s[i] <= '9' ){
                int digit = s[i] - '0';
                ans = ans * 10 + digit;
                if ( ans > INT_MAX ) {
                    ans = sign ? INT_MIN : INT_MAX;
                    break; 
                }
                head = false;
            }
            else if ( head && s[i] == ' ')  continue;
            else if ( head && s[i] == '+'  ) head = false;
            else if ( head && s[i] == '-' ){
                sign = 1;
                head = false;
            }
            else    break;
        }

        return sign ? -(ans) : ans;
    }
};
