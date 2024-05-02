#include "../main.h"

int Solution::romanToInt(string s){
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