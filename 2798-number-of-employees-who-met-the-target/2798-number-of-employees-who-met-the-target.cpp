class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int employees = 0;
        for (int it : hours)
        {
            if (it >= target)
                employees++;
        }
        return employees;
    }
};