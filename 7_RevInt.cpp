/*
LeetCode Problem 7: Reverse Integer
Given a 32-bit signed int, reverse the digits of an int.
*/
#include <iostream>
#include <climits>
using namespace std;

int reverse(int x){
  long ans = 0; //the reverse integer we will be returning
  while(x != 0){ //while x is not 0
    ans = ans*10 + x%10; //ans is equal to ans*10 + the last digit of the input
    x /= 10; //divide the input by 10.
  }
  return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
}

int main(){
  cout << reverse(123) << endl;
  cout << reverse(-123) << endl;
  cout << reverse(120) << endl;
}
