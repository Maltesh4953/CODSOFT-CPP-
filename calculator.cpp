#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1,num2,result;
    char op;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter op ";
    cin>>op;
    cout<<"enter the second number: ";
    cin>>num2;
    if (op=='+')
    {
        result=num1+num2;
    } 
    else if(op=='-'){
        result=num1-num2;
    }
    else if(op=='*'){
        result=num1*num2;
    }
    else if(op=='/'){
        result=num1-num2;
    }
    
    else if(op=='%'){
        result=num1%num2;
    }

    else{
        cout<<"you entered an invalid operator";
    }

    cout<<result;
    
}