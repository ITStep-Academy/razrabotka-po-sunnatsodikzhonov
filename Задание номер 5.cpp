#include <iostream>
using  namespace std;


int main()
{

    int a = 35;
    int a_old = a;
    int b = 54;
    int b_old = b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "'a' was = " << a_old << " and now is " << a << endl << "'b' was = " << b_old << " and now is " << b << endl;
    system("pause");
}