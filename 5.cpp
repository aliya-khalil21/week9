# include <iostream>
using  namespace std;
main()
{
string name[4];
string result;
for(int i=0;i<4;i++)
{
   cout <<"enter value";
   cin >>name[i];


}

if (name[0]==name[2] && name[0]==name[1] && name[0]==name[3])
{
    result = "true";
    
}
else
{
    result="false";
}
cout <<result;
}









