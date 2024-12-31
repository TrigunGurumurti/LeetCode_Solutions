class Solution {
public:
    int fib(int n) {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        int previous1 = 1;
        int previous2 = 0;
        for(int i = 2; i <= n; i++)
        {
            int current = previous1 + previous2;
            previous2 = previous1;
            previous1 = current;
        }
        return previous1;
    }
};