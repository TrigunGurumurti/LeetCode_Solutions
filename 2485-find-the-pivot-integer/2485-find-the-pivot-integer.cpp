class Solution {
public:
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2;
        if(sqrt(sum) == floor(sqrt(sum)))
            return sqrt(sum);
        else
            return -1;
    }
};