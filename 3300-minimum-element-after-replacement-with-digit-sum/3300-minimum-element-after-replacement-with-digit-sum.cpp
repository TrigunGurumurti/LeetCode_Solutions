class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int result = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            int sumOfDigits = 0;
            while(nums[i] > 0)
            {
                sumOfDigits = nums[i] % 10;
                nums[i] /= 10;
            }
            if(sumOfDigits < result)
                result = sumOfDigits;
        }
        return result;
    }
};