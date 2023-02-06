#include <iostream>
using namespace std;
main()
{
    string name[5];
    int price = 500;
    int totalprice;
    int price1;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter name";
        cin >> name[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            price1 = 500 * 5 / 100;
            totalprice=price-price1;
            cout << name[i] << " " << totalprice<<endl;
        
        }
        else
        {
            price1 = 500 * 10 / 100;
             totalprice=price-price1;
            cout << name[i] << " " << totalprice<<endl;
        }
    }
}