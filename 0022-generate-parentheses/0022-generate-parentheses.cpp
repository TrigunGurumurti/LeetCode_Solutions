class Solution {
private:
    vector<string> answer;
    void genResult(int start, int end, int n, string current)
    {
        if(current.size() == n*2)
        {
            answer.push_back(current);
            return;
        }
        if(start < n)
            genResult(start+1, end, n, current+"(");
        if(end < start)
            genResult(start, end+1, n, current+")");
    }

public:
    vector<string> generateParenthesis(int n) {
        genResult(0, 0, n, "");
        return answer;
    }
};