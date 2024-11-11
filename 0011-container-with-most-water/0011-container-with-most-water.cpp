class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximumWater = 0;
        for(int i = 0; i < height.size(); i++)
        {
            for(int j = i + 1; j < height.size(); j++)
            {
                int width = j - i;
                int minheight = min(height[i], height[j]);
                int currentWater = width * minheight;

                maximumWater = max(maximumWater, currentWater);
            }
        }
        return maximumWater;
    }
};