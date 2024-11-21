class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n =  operations.size();
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(operations[i][0] == '+' || operations[i][1] == '+')
                count++;
            else
                count--;
        }
        return count;
    }
};