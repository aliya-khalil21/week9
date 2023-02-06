#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin, name);
    int l = name.length();
    string n;
    getline(cin, n);
    int idx = 0;
    int counter = 0;
    for (int i = 0; i < l; i++)
    {
        char m = name[i];

        while (n[idx] != '\0')
        {
            if (m == n[idx])
            {
                counter = counter + 1;
            }

            idx = idx + 1;
        }
    }
    cout << counter;
}