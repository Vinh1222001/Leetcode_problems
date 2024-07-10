#include "../main.hpp"

vector<int> twoSum(vector<int>& nums, int target){
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

void Solution::test_TwoSum(){
    vector<int> result;

    vector<int> nums;

    unsigned int nums_len;
    cin >> nums_len;

    for (unsigned int i = 0; i < nums_len; i++)
    {
        int value;
        cin>> value;
        nums.push_back(value);
    }
    
    int target; 
    cin >> target;

    result = twoSum(nums,target);
        
    cout << result[0] << " " << result[1];
}