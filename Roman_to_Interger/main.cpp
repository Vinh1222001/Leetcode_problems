#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

class Solution {
public:

    int baseRomanToInt(char s){
        if(s == 'I') return 1;
        if(s == 'V') return 5;
        if(s == 'X') return 10;
        if(s == 'L') return 50;
        if(s == 'C') return 100;
        if(s == 'D') return 500;
        if(s == 'M') return 1000;
        return -1;
    }

    int romanToInt(string s) {
        int curr_letter_idx= s.length() - 1;

        int result = 0;       
        
        int last_letter_idx = curr_letter_idx;
        
        while(curr_letter_idx >= 0){

            if(baseRomanToInt(s[curr_letter_idx])  >= baseRomanToInt(s[last_letter_idx])){
                result += baseRomanToInt(s[curr_letter_idx]);
                // printf("Current result = %d\n", result);
            }else{
                result-= baseRomanToInt(s[curr_letter_idx]);
            }
            last_letter_idx = curr_letter_idx;
            curr_letter_idx--;
        }
        return result;
    }   
};

int main(){

    Solution solving;

    const unsigned int test_case_len = 3;
    
    string test_cases[test_case_len] = {
        "III", "LVIII", "MCMXCIV"
    };

    int output_expectations[test_case_len] ={
        3,58,1994
    };

    printf("Running %d test case...\nResult:\n\n", test_case_len);
    for (unsigned int i = 0; i < test_case_len; i++)
    {
        int output = solving.romanToInt(test_cases[i]);

        if(output == output_expectations[i]){
            cout << "Test cases " << (i+1) << ": passed" << endl;

        }else{
            printf("Test case %d: failed\nOut put expectation: %d\nYour output: %d\n", i+1, output_expectations[i], output);
        }

        printf("\n\n");
    }
    
    
    return 0;
}