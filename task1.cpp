#include <iostream>
using namespace std;
int main()
{
    int numofdays;
    cout << "enter num of days in a week";
    cin >> numofdays;
    switch (numofdays){
    case 1:
        cout << "monday\n";
        break;
    case 2:
        cout << "tuesday\n";
        break;
    case 3:
        cout << "wednesday\n";
        break;
    case 4:
        cout << "thursday\n";
        break;
    case 5:
        cout << "friday\n";
        break;
    case 6:
        cout << "saturday\n";
        break;
    case 7:
        cout << "sunday\n";
        break;
    default:
        cout << "invalid day" << endl;
    }

    return 0;
}
