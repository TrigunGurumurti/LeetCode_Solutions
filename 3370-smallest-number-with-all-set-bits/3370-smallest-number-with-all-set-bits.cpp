class Solution {
public:
    int smallestNumber(int n) {
        int result = 0; 
        while(n > result)
            result = result*2 + 1;
        return result; 
    }
};