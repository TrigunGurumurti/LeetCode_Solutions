class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for(int it : nums)
        {
            elementSum += it;
            while(it != 0)
            {
                digitSum += it % 10;
                it /= 10;
            }
        }    
        return elementSum - digitSum;
    }
};