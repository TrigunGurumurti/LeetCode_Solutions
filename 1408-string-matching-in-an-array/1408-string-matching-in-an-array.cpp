class Solution {
public:
	vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
		vector<string> answer;
		for(int i = 0; i < n; i++)
        {
			for(int j = 0; j < n; j++)
            {
				if(words[i] != words[j] && words[j].find(words[i]) != -1)
                {
					answer.push_back(words[i]);
					break;                    
				}
			}
		}
		return answer;
	}
};