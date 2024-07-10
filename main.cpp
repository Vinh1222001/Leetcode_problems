#include "main.hpp"

int main(int argc, char *argv[]){

    unsigned int problem_id = stoi(argv[1]);
    // cout << "You entered problem id = " << problem_id << endl;

    Solution problem;

    switch(problem_id) {
        case VIEW_TWO_SUM_PROBLEM:
            problem.test_TwoSum();
            break;
        case VIEW_LONGEST_COMMON_PREFIX_PROBLEM:
            problem.test_LongestCommonPrefix();
            break;
        case VIEW_PALINDROME_NUMBER_PROBLEM:
            problem.test_PalindromeNumber();
            break;
        case VIEW_ROMAN_TO_INTERGER:
            problem.test_RomanToInterger();
            break;
        case VIEW_VALID_PARENTHESES_PROBLEM:
            problem.test_ValidParentheses();
            break;
        case VIEW_MERGE_TWO_SORTED_LIST:
            problem.test_MergeTwoLists();
            break;

        case VIEW_ADD_TWO_NUMBERS:
            problem.test_AddTwoNumber();
            break;
            
        case VIEW_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS:
            problem.test_lengthOfLongestSubstring();
            break;
            
        default:
            std::cout << "You enter wrong parameter!\nPlease run again and try another parameter." << std::endl;
            break;
    }

    return 1;
}

