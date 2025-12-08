class Solution {
public:
    int next(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = next(n);  // fast starts one step ahead

        while (fast != 1 && slow != fast) {
            slow = next(slow);          // move 1 step
            fast = next(next(fast));    // move 2 steps
        }

        return fast == 1;
    }
};
