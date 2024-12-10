class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        unordered_map<int, vector<int>> temporaryGroup;
        vector<vector<int>> answer;
        for(int i = 0; i < n; i++)
        {
            int size = groupSizes[i];
            temporaryGroup[size].push_back(i);
            if(temporaryGroup[size].size() == size)
            {
                answer.push_back(temporaryGroup[size]);
                temporaryGroup[size].clear();
            }
        }
        return answer;
    }
};