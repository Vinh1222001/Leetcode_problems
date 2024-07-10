#include "../main.hpp"

bool isValid(string s){
    
    if(s[0] == ')') return false;
    if(s[0] == ']') return false;
    if(s[0] == '}') return false;

    string open_brackets;

    for (int i = 0; i < s.length(); i++)
    {

        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            
            open_brackets.push_back(s[i]);
        
        }else{

            if(open_brackets.length() == 0) return 0;

            if(s[i] == ')'){

                if(open_brackets.back() != '(') return false;
            } 

            if(s[i] == ']'){
                
                if(open_brackets.back() != '[') return false;
            } 

            if(s[i] == '}'){
                
                if(open_brackets.back() != '{') return false;
            } 

            open_brackets.pop_back();

        }
    }
    
    if (open_brackets.length() == 0)
    {
        return true;
    }
    

    return false;
}

void Solution::test_ValidParentheses(){
    string s;
    cin >> s;
    cout << (isValid(s)?"true":"false");
}