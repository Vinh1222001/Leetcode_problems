#include "../main.hpp"

int lengthOfLongestSubstring(string s){
    
    if(s.length() <= 0) return 0;

    if (s.length() == 1) return 1;
    
    unsigned int i = 0;
    string substr="";
    unsigned int longest_substr_len = 1; // the longest lenght of substring variable aka the result.

    while (i < s.length() - 1)      
    {
        substr = s[i];

        int j = i + 1;
       
        while (substr.find(s[j]) == string::npos)
        {
            substr.push_back(s[j]);
            j++;
            if(j > (s.length() -1)){
                // return max(longest_substr_len, substr.length());
                return longest_substr_len > substr.length()?longest_substr_len:substr.length();
            } 
        }

        i++;
        longest_substr_len = longest_substr_len > substr.length()?longest_substr_len:substr.length();;

        // cout << "The longest substring length: " << longest_substr_len << endl;

    }
    
    //

    return longest_substr_len;
    
}

void Solution::test_lengthOfLongestSubstring(){
    string s;
    getline(cin, s);
    cout << lengthOfLongestSubstring(s);
}