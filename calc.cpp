#include <iosream.h>
using namespace std;
void main()         //program execution start from here
{
cout<<"program for calculator "<<endl;
int a,b,c,ans;
cout<<"1)addition"<<endl;
cout<<"enter values for a and b"<<endl
cin>>a>>b;
c=a+b;
cout<<"addition ="<<c;

cout<<"2)subtraction"<<endl;
cout<<"enter values for a and b"<<endl;
cin>>a>>b;
ans=a-b;
cout<<"subtraction ="<<ans;

cout<<"Multiplicatioon"<<endl;
cout<<"enter values for a and b"<<endl;
cin>>a>>b;
c=a*b;
cout<<"product ="<<c;
return 0;
}
