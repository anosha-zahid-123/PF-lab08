#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "enter alphabets";
    cin >> alpha;
    switch(alpha)
    {
    case 'a':// lower case
        cout << "a is a vowel letter\n";
        break;
    case 'e':
        cout << "e is a vowel letter\n";
        break;
    case 'i':
        cout << "i is a vowel letter\n";
        break;
    case 'o':
        cout << "o is a vowel letter\n";
        break;
    case 'u':
        cout << "u is a vowel letter\n";
        break;
    case 'A'://upper case
        cout << "A is a vowel letter\n";
        break;
    case 'E':
        cout << "E is a vowel letter\n";
        break;
    case 'I':
        cout << "I is a vowel letter\n";
        break;
    case 'O':
        cout << "O is a vowel letter\n";
        break;
    case 'U':
        cout << "U is a vowel letter\n";
        break;
    default :
    cout<<"invalid input";
    }
return 0;
}