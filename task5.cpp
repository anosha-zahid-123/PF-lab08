#include <iostream>
using namespace std;
int main(){
    int menu;
    cout<<"enter a number from 1 to 4";
    cin>>menu;
    int deposit;
    cout<<"enter a deposit value";
    cin>>deposit;
    int withdraw;
    cout<<"enter a withdraw value";
    cin>>withdraw;
    int checkbalcne;
    cout<<"check balnce amount";
    checkbalcne= deposit- withdraw;
    switch(menu)
    {
    case 1:
        cout<<"deposit";
        break;
    case 2:
        cout<<"withdraw";
        break;
    case 3:
        cout<<"check balance";
        break;
    case 4:
        cout<<"exit";
        break;
   default:
        cout<<"invalid input";
        break;
    }
    return 0;
}