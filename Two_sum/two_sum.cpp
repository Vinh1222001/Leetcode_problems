#include "../main.h"

vector<int> Solution::twoSum(vector<int>& nums, int target){
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        
        for (int j = i+1; j < nums.size(); j++)
        {
            if(nums.at(j) + nums.at(i) == target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
        
    }
        
    return result;
}