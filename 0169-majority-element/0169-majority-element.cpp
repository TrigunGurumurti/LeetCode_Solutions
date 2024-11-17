class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majElement = 0;
        for(int it : nums) 
        {
            if(count == 0)
                majElement = it;
                
            if(it == majElement)
                count++;
            else
                count--;
        }
        return majElement;
    }
};