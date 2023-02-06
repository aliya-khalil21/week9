#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size";
    cin >> size;
    int arr[size];
    int time;
    cout << "enter time";
    cin >> time;
    for (int i = 0; i < size; i++)
    {
        cout << "enter values";
        cin >> arr[i];
    }
    for (int i = 0; i < time; i++)
    {
        for (int i = 0; i < size; i++)
        {

            if (arr[i] % 2 == 0)
            {
                arr[i] = arr[i] - 2;
            }
            else
            {
                arr[i] = arr[i] + 2;
            }
        }
    }
    cout <<"[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<",";
    }
    cout<<"]";
}
