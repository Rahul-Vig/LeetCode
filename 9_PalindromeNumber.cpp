/*
LeetCode Problem 9: Palindrome Number
Determine whether an integer is a palindrome.
An integer is a palindrome when it reads the same backward as forward.
*/

class Solution {
public:

    int reverse(int x){
     long res = 0;
     while(x != 0){
        int temp = res*10 + x%10;
         if(temp/10 != res) return 0; //checks for overflow efficiently
        res = temp;
        x /= 10;
      }
        return res;
    }

    bool isPalindrome(int x) {
        if(x < 0) return false; //we know that if x is negative it can never be a palindrome
        return x == reverse(x);
    }
};
