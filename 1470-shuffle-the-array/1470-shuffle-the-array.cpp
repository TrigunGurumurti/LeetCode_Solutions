class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int first = 0;
        int second = n;
        int maximum = 1001;
        for(int i = 0; i < 2*n; i++)
        {
            if(i % 2 == 0)
                nums[i] = (nums[first++] % maximum)*maximum + nums[i];
            else
                nums[i] = (nums[second++] % maximum)*maximum + nums[i];
        }
        for(int i = 0; i < 2*n; i++)
            nums[i] /= maximum;
        return nums;
    }
};