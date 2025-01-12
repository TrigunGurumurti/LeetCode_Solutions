class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int result = 0;
        for(int i = 0; i <= n-1; i++)
        {   
            int sum = 0;
            for(int j = i; j < n; j++)
            {   
                sum += arr[j];
                if((j-i) % 2 == 0)
                    result += sum;
            }
        }
        return result;
    }
};