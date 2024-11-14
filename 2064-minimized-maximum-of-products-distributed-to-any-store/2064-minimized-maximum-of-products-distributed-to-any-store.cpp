class Solution {
    bool isPossible(vector<int>& q, int n, int barrier)
    {
        int count = 0;
        for(int i = 0; i < q.size(); i++)
        {
            if(q[i] <= barrier) count++;
            else
            {
                int temp = q[i];
                while(temp > 0)
                {
                    temp -= barrier;
                    count++;
                }
            }
            if( count > n) return false; 
        }
        return true;
    }
    
public:
    int minimizedMaximum(int n, vector<int>& q)
    {
        int start = 1;
        int end =* max_element(q.begin(),q.end());
        int result = INT_MAX;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(isPossible(q, n, mid))
            {
                result = min(result, mid);
                end = mid - 1;
            }
            else start = mid + 1;
        }
        return result;
    }
};