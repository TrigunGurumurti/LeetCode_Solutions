class Solution {
public:
    int solve(int n) {
        int newNumber = 0;
        while(n != 0)
        {
            int num = n % 10;
            newNumber += num*num;
            n = n / 10;
        }
        return newNumber;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n != 1 && !s.count(n))
        {
            s.insert(n);
            n = solve(n);
        }
        return n == 1;
    }
};