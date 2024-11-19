class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        for(int i = 0; i <= n - 1; i++)
        {
            int tempVariable = score[i][0];
            score[i][0] = score[i][k];
            score[i][k] = tempVariable;
        }

        sort(score.rbegin(),score.rend());

        for(int i = 0; i <= n - 1; i++)
        {
            int tempVariable = score[i][0];
            score[i][0] = score[i][k];
            score[i][k] = tempVariable;
        }
        return score;
    }
};