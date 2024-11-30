class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorAnswer = start ^ goal;
        int result = 0;
        while(xorAnswer > 0)
        {
            result += xorAnswer & 1; 
            xorAnswer >>= 1;
        }
        return result;
    }
};