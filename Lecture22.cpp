#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    int c;

    int *p;
    int *q;

    p = &a;
    q = &b;

    a = 2; // I am only changing the value , but the address of a is still the same, so the pointer will still to the same a, no matter how the a is being changed
    b = 5;

    c = *p + *q;

    // cout << "The value of a is (From the actual variable type) " << a << endl;
    // cout << "The value of a from the pointer using *(astreix/ indirection operator) " << *p << endl;

    cout << "The value of c is : " << c << endl;

    cout << "The address of a is " << &a << "The value of the pointer is " << p;

    return 0;
}