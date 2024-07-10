#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
#include <cstring>

using namespace std;

#pragma region DEFINE PROBLEM ID DO YOU WANT TO VIEW

    #define VIEW_LONGEST_COMMON_PREFIX_PROBLEM  1

    #define VIEW_PALINDROME_NUMBER_PROBLEM      2

    #define VIEW_ROMAN_TO_INTERGER              3

    #define VIEW_TWO_SUM_PROBLEM                4

    #define VIEW_VALID_PARENTHESES_PROBLEM      5

    #define VIEW_MERGE_TWO_SORTED_LIST          6

    #define VIEW_ADD_TWO_NUMBERS                7

    #define VIEW_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS 8

#pragma endregion

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
    // private:
    public:

        void test_TwoSum();
        // int         romanToInt(string s);
        void test_RomanToInterger();
        // bool        isPalindrome(int x);
        void test_PalindromeNumber();
        // string      longestCommonPrefix(vector<string>& strs);
        void test_LongestCommonPrefix();
        // bool        isValid(string s);
        void test_ValidParentheses();
        // ListNode*   mergeTwoLists(ListNode* list1, ListNode* list2);
        void test_MergeTwoLists();

        void test_AddTwoNumber();

        void test_lengthOfLongestSubstring();
        Solution(/* args */){}
        ~Solution(){}
};
