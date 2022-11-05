#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    signed int a;
    char b = '+';
    char c = '-';
    char f = '0';
    char *A;
    cout << "Incert number: " << endl;
    cin >> a;
    if (a > 0) A = &b;
    else if (a < 0) A = &c;
    else A = &f;
    cout << "Sign of number is: " << *A;
    return 0; 
}