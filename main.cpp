#include "main.h"

int main(int argc, char *argv[]){

    unsigned int problem_id = stoi(argv[1]);
    cout << "You entered problem id = " << problem_id << endl;

    Solution problem;

    if(problem_id == VIEW_TWO_SUM_PROBLEM){

        cout << "You are viewing TWO SUM problem" << endl;
        cout << "Difficult Level: EASY\n\n";

        vector<int> nums = {0,4,3,0};
        int target = 0;
        vector<int> result = problem.twoSum(nums,target);
        if(result.size()>=2){

            cout << result.at(0) << " " << result.at(1) << endl;
        
        }else{
            cout << "Result is not found!" << endl;
        }

    }else if(problem_id == VIEW_LONGEST_COMMON_PREFIX_PROBLEM){

        cout << "You are viewing LONGEST COMMON PREFIX problem" << endl;
        cout << "Difficult Level: EASY\n\n";

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
            string output = problem.longestCommonPrefix(test_cases[i]);

            if(output == output_expectations[i]){
                cout << "Test cases " << (i+1) << ": passed" << endl;

            }else{

                cout << "Test case " << i+1 << ": failed" << endl;
                cout << "Out put expectation:" << "\"" <<output_expectations[i] << "\"" << endl;
                cout << "Your output: " << "\"" << output << "\""<< endl; 
            }

            printf("\n\n");
        }

    }else if (problem_id == VIEW_PALINDROME_NUMBER_PROBLEM){

        cout << "You are viewing PALINDROME NUMBER problem" << endl;
        cout << "Difficult Level: EASY\n\n";

        const int count = 4;
        int input[count] = {121, -121, 10, 313};
        bool output[count] = {true, false, false, true};

        for (int i = 0; i < count; i++)
        {
            if(problem.isPalindrome(input[i]) == output[i]){
                cout << "Test case "<< i << ": passed"<< endl;
            }else{
                cout << "Test case "<< i << ": failed"<< endl;
            }
        }
        
    }else if (problem_id == VIEW_ROMAN_TO_INTERGER){
        
        cout << "You are viewing ROMAN TO INTERGER problem" << endl;
        cout << "Difficult Level: EASY\n\n";

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
            int output = problem.romanToInt(test_cases[i]);

            if(output == output_expectations[i]){
                cout << "Test cases " << (i+1) << ": passed" << endl;

            }else{
                printf("Test case %d: failed\nOut put expectation: %d\nYour output: %d\n", i+1, output_expectations[i], output);
            }

            printf("\n\n");
        }

    }else if (problem_id == VIEW_VALID_PARENTHESES_PROBLEM){

        cout << "You are viewing VALID PARENTHESES problem" << endl;
        cout << "Difficult Level: EASY\n\n";

        const unsigned int test_case_len = 4;
    
        string test_cases[test_case_len] = {
            "()", "()[]{}", "(]", "(){}}{"
        };

        bool output_expectations[test_case_len] ={
            true, true, false, false
        };

        printf("Running %d test case...\nResult:\n\n", test_case_len);
        for (unsigned int i = 0; i < test_case_len; i++)
        {
            int output = problem.isValid(test_cases[i]);

            if(output == output_expectations[i]){
                cout << "Test cases " << (i+1) << ": passed" << endl;

            }else{
                printf("Test case %d: failed\nOut put expectation: %s\nYour output: %s\n", i+1, output_expectations[i]?"true":"false", output?"true":"false");
            }

            printf("\n\n");
        }

    }else{
        cout << "You enter wrong parameter!\nPlese run again and try another parameter."<< endl;
    }
    
    
    



    return 1;
}