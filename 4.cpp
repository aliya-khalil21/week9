#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size";
    cin >> size;
    int arr[size];
    string result;
    for (int i = 0; i < size; i++)
    {
        cout << "enter values ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {  
        if (arr[i]%10 == 7)
        {
            result="boom";
            break;
        }
        else
        {
            result= "there is no 7 in the array";
            
        }
    }
    cout <<result;
}