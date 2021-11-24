#include <iostream>
using namespace std;
void check(string a){
    int b=0;
for(int i=0;i<=a.length();i++)
{
    if (a[i]=='b' && a[i+1]=='a')
    {
        b++;
        break;
    }


}
if(b==0)
{
    cout<<"Accepted";
}
else if(b==1)
{
    cout<<"Not accepted";
}
}
int main()
{
   string a;
   cin>>a;
   check(a);



}
