#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
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
};

int main(void){

    vector<int> nums = {0,4,3,0};
    int target = 0;
    Solution solving;
    
    vector<int> result = solving.twoSum(nums,target);

    if(result.size()>=2){

        cout << result.at(0) << " " << result.at(1) << endl;
    
    }else{
        cout << "Result is not found!" << endl;
    }
    return 0;
}