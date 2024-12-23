class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maximumCandies = *max_element(candies.begin(), candies.end());
        vector<bool> answer(n);
        for(int i = 0; i <= n-1; i++)
        {
            if(candies[i] + extraCandies >= maximumCandies)
                answer[i] = true;
            else
                answer[i] = false;
        }
        return answer;
    }
};