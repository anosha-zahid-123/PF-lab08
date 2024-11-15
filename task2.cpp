#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter two numbers";
    cin >>num1>>num2;
    char opr;
    cout<<"enter +,-,*,/";
    cin>>opr;
    switch (opr){
        case '-':
          cout<<num1-num2;
        break;
        case '+':
          cout<<num1+num2;
        break;
        case '*':
          cout<<num1*num2;
        break;
        case '/':
          cout<<num1/num2;
        break;
        default:
           cout<<"invalid input";
           break;

    }
    return 0;
}