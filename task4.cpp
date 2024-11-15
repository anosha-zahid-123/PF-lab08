#include <iostream>
using namespace std;
int main(){
    char grade;
    cout<<"comments on grade";
    cin>>grade;
    switch(grade)
    {
     case 'A':
        cout<<"excellent";
        break;
    case 'B':
        cout<<"good";
        break;
    case 'C':
        cout<<"better";
        break;
    case 'D':
        cout<<"poor";
        break;
     case 'F':
        cout<<"fail";
        break;
        default:
        cout<<"invalid input";
    }
    return 0;
    }