#include <iostream>
using namespace std;
main()
{
int size;
cout <<"enter size";
cin>>size;
string colour[size];
string z=colour[0];
for(int i=0;i<size;i=i+1)
{
    cout <<"enter colours";
    cin>>colour[i];
}
int time=size*2;
int counter=0;
for(int j=0;j<size;j++)
{
    if (z!=colour[j])
    {
        z=colour[j];
        counter=counter+1;
    }

}
int total=time+counter;
cout<<total-1;


}