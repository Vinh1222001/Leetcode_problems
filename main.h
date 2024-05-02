#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

#pragma region DEFINE PROBLEM ID DO YOU WANT TO VIEW

    #define VIEW_LONGEST_COMMON_PREFIX_PROBLEM  1

    #define VIEW_PALINDROME_NUMBER_PROBLEM      2

    #define VIEW_ROMAN_TO_INTERGER              3

    #define VIEW_TWO_SUM_PROBLEM                4

    #define VIEW_VALID_PARENTHESES_PROBLEM      5

#pragma endregion

class Solution
{
private:
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
public:

    vector<int> twoSum(vector<int>& nums, int target);
    int         romanToInt(string s);
    bool        isPalindrome(int x);
    string      longestCommonPrefix(vector<string>& strs);
    bool        isValid(string s);
    Solution(/* args */){}
    ~Solution(){}
};