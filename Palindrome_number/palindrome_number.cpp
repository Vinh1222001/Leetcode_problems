#include "../main.hpp"

bool isPalindrome(int x) {

    // cout<< endl << endl << "Test case x = "<< x <<endl; 
    if( x >= 0  && x <10 ) return true;

    if(x < 0) return false;
    
    int count =0, num = x; 
    double reversed_x =0;

    while (num != 0)
    {
        num /= 10;
        count++;

        // cout << "count = " << count<<endl;
    }


    count--;

    num = x;
    
    while (num !=0){
        // cout << "At count = "<< count << ", num = " << num;
        reversed_x += (num%10)*pow(10, count);
        // cout << ", reversed_x = " <<reversed_x <<endl;
        count--;
        num /= 10;
    }

    // cout << "reverse_x = " << reversed_x << endl; 
    
    if(x == reversed_x) return true;
    return false;
    
}

void Solution::test_PalindromeNumber(){

    string x;
    cin >> x;
    cout << (isPalindrome(stoi(x))?"true":"false"); 
}