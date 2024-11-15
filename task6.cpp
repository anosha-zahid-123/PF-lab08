#include <iostream>
using namespace std;
int main(){
    char light;
    cout<<"light simulation";
    cin>>light;
    switch (light)
    {
    case 'r':
      cout<<"stop";
      break;
    case 'g':
      cout<<"go";
      break;
    case 'y':
      cout<<"slow down";
      break;
    default:
      cout<<"invalid input";
      break;
    }
return 0;
    }