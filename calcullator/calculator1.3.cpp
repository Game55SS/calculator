#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2;
    cout<<"Enter two operands: ";
    cin >>num1;
    cout << "Enter operetor : +,-,*,/:";
    cin >>op;
    cout <<"Enter two operands: ";
    cin >>num2;
    
    switch(op){
        case'+':
         cout<<num1<<"+"<<num2<<"="<<num1+num2;
         break;
        case'-':
         cout<<num1<<"-"<<num2<<"="<<num1-num2;
         break;
        case'*':
         cout<<num1<<"*"<<num2<<"="<<num1*num2;
         break;
        case'/':
         cout<<num1<<"/"<<num2<<"="<<num1/num2;
         break;
        default:
         cout<<"Error opertor is not corrected";
         break;
    }
    return 0;
}
