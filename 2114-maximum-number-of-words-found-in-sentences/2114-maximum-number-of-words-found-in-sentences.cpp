class Solution {
public:
    int countWords(string &s)
    {
        int count = 1;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ')
                count++;
        }
        return count;
    }
    int mostWordsFound(vector<string>& sentences) 
    {
        int n = sentences.size();
        int maximumCount = 0;
        for(int i = 0; i < n; i++)
            maximumCount = max(countWords(sentences[i]),maximumCount);
        return maximumCount;
    }
};