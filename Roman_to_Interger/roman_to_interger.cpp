#include "../main.hpp"

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

int romanToInt(string s){
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

void Solution::test_RomanToInterger(){
    string s;
    cin >> s;
    cout << romanToInt(s);
}