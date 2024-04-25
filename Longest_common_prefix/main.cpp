#include <iostream>
#include <math.h>
#include <string.h>
#include <vector>

using namespace std;

class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        string prefix = "";
        bool no_com_prefix_flag = true;
        for (int curr_letter = 0; curr_letter < strs[0].size()  && no_com_prefix_flag; curr_letter++)
        {
            prefix = strs[0][curr_letter]; 
            for (int i = 1; i < strs.size() && no_com_prefix_flag; i++)
            {   

                if(curr_letter > strs[i].size()-1){

                    no_com_prefix_flag =false;
                    prefix ="";

                    continue;
                }

                if(strs[0][curr_letter] != strs[i][curr_letter]){
                    no_com_prefix_flag =false;
                    prefix ="";
                }

                
            }

            result.append(prefix);
            
        }

        return result;
    } 
};

int main(){

    Solution solving;

    const unsigned int test_case_len = 2;
    
    vector<string> test_cases[test_case_len] = {
        {"flower","flow","flight"},
        {"dog","racecar","car"}
    };

    string output_expectations[test_case_len] ={
        "fl", ""
    };

    printf("Running %d test case...\nResult:\n\n", test_case_len);
    for (unsigned int i = 0; i < test_case_len; i++)
    {
        string output = solving.longestCommonPrefix(test_cases[i]);

        if(output == output_expectations[i]){
            cout << "Test cases " << (i+1) << ": passed" << endl;

        }else{

            cout << "Test case " << i+1 << ": failed" << endl;
            cout << "Out put expectation:" << "\"" <<output_expectations[i] << "\"" << endl;
            cout << "Your output: " << "\"" << output << "\""<< endl; 
        }

        printf("\n\n");
    }
    
    
    return 0;
}