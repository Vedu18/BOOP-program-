// Q-1 WAP to perform all arithmetic operation on two interger scanned from user 

#include <iostream>
using namespace std;

int main() {
  int x, y;
  float divi;
  int sum,sub,mult,mod;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  sub = x - y;	
  mult = x * y;	
  divi = (float) x / y;	
  mod = x % y;
  cout << "Sum is: " << sum << endl;
  cout << "Sub is: " << sub << endl;
  cout << "Mult is: " << mult << endl;
  cout << "Divi is: " << divi << endl;
  cout << "Mod is: " << mod << endl;
  return 0;
}


	
