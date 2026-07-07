class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long orgn = 0;
        while (n > 0) {
            long long r = n % 10;
            sum += r;
            n /= 10;
            if (r != 0)
                orgn = orgn * 10 + r;
        }
        long long reversedNum = 0, remainder;
        while (orgn != 0) {

            remainder = orgn % 10;
            reversedNum = reversedNum * 10 + remainder;
            orgn /= 10;
        }

        return reversedNum * sum;
    }
};