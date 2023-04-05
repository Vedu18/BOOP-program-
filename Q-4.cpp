// WAP to swap two numbers using third variable 

#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;

    cout << "Type a number: ";
    cin >> a;
    
    cout << "Type another number: ";
    cin >> b;


    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
