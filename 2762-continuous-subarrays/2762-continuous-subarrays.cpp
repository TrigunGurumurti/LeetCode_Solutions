class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        int rear = 0;
        long long result =0;
        multiset<int> ms;
        for(int front = 0; front < n; front++)
        {
            ms.insert(nums[front]);
            while(ms.size() > 1 && *ms.rbegin() - *ms.begin() > 2)
            {
                ms.erase(ms.find(nums[rear]));
                rear++;
            }
            result += front - rear + 1;
        }
        return result;
    }
};