#define mod 1000000007
class Solution {
public:
    int countGoodNumbers(long long n) {
        long long even = n/2 + n%2;  
        long long odd = n/2;
        long long ans = (power(5, even) * power(4, odd)) % mod;
        return (int)ans;
    }

    long long power(long long x, long long n) {
        if (n == 0) return 1;
        long long half = power(x, n/2);
        half = (half * half) % mod;
        if (n % 2 == 0) {
            return half;
        } else {
            return (x * half) % mod;
        }
    }
};