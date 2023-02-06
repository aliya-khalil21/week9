#include <iostream>
using namespace std;
main()
{
    string name[10] = {"shimmy", "shake", "piroutte", "slide", "boxstep", "headspin", "dosado", "poop", "lock", "arabesque"};
    string value;
    cout << "enter value";
    cin >> value;
    int l = value.length();
    if (l != 4)
    {
        cout << "invalid";
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; i < 4; i++)
        {
            if (!isdigit(value[j]))
            {
                cout << "invalid";
                break;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {

        int digit = (value[i] + i) % 10;
        cout << digit;
    }
}