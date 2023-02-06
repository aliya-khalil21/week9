#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin,name);
    int l=name.length();
    if (l%2==0)
    {
        cout <<"true";
    }
    else{
        cout <<"false";
    }
}