#include "../main.h"

string Solution::longestCommonPrefix(vector<string>& strs) {
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
