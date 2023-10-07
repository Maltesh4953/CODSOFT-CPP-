#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

string guess(int val){
    int N;
    cout<<"ENTER A NUMBER :";
    cin>>N;
    if(N==val){
        return "you got it correct";
        
    }
    while(N!=val){
    if(N>val){
        cout<<"You entered a Greater number"<<endl;
        cout<<"Please enter another number"<<endl;
        
    }
    else if(N<val){
        cout<<"You entered a smaller number"<<endl;
        cout<<"Please enter another number"<<endl;

    }
    cin>>N;
    }
    return "you got it correct";
}
int main()
{
int limit=100;
int result=rand()% limit;
cout<<result;
cout<<guess(result);
return 0;
}