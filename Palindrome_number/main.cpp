#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        cout<< endl << endl << "Test case x = "<< x <<endl; 
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
};

int main(){

    Solution solving;
    const int count = 4;
    int input[count] = {121, -121, 10, 313};
    bool output[count] = {true, false, false, true};

    for (int i = 0; i < count; i++)
    {
        if(solving.isPalindrome(input[i]) == output[i]){
            cout << "Test case "<< i << ": passed"<< endl;
        }else{
            cout << "Test case "<< i << ": failed"<< endl;
        }
    }
    
    return 0;
}