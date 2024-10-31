class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long revNum = 0;
        while(temp > 0)
        {
            int rem = temp%10;
            revNum = revNum*10+rem;
            temp = temp/10;
        }
        if(x == revNum) return true;
        else return false;
    }
};