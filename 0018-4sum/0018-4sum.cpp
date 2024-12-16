class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(i > 0 and nums[i] == nums[i - 1])
                continue;
            for(int j = i + 1; j < n; j++)
            {
                if(j > (i + 1) && nums[j] == nums[j - 1])
                    continue;
                int low = j + 1;
                int high = n - 1;
                while(low < high)
                {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[low];
                    sum += nums[high];
                    if(sum == target)
                    {
                        result.push_back({nums[i] , nums[j] , nums[low] , nums[high]});
                        int start = nums[low];
                        int end = nums[high];
                        low++;
                        high--;
                        while(low < high && nums[low] == start)
                            low++;
                        while(low < high && nums[high] == end)
                            high--;
                    }
                    else if(sum > target) 
                        high--;
                    else
                        low++;
                }
            }
        }
        return result;
    }
};