#include <iostream>
#include <cfloat>  
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
    char op;
    float num1,num2,result;
    cout<<"Enter two operands: ";
    cin >>num1;
    cout << "Enter operetor : +,-,*,/,p,r:";
    cin >>op;
    cout <<"Enter two operands: ";
    cin >>num2;
    
     if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/') 
        result = num1 / num2; 
    else if (op == 'p')
        result = pow(num1, num2);
    else if (op == 'r')
        result = sprt(num1);
         else {
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
    }

    if (result != -DBL_MAX)
        cout << num1 << " " << op << " " << num2 << " = " << result;
    return 0;
}
