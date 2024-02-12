#include<iostream.h>
#include<conio.h>
class mystring
{
int a[3][3],i,j;
public:
void get();
void put();
void operator-();
void operator++();
};
void mystring::get()
{
int i,j;
cout<<"\n Enter matrix element";
for(i=0;i<3;i++)
for(j=0;j<3;j++)
cin>>a[i][j];
}
void mystring::put()
{
int i,j;
cout<<"\n enter Matrix element" ;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cin>>a[i][j];
cout<<"\n";
}
}
void mystring::operator-()
{
for(i=0;i<3;i++)
for(j=0;j<3;j++)
a[i][j]=-a[i][j];
}
void mystring::operator++()
{
for(i=0;i<3;i++)
for(j=0;j<3;j++)
a[i][j]=++a[i][j];
}
int main()
{
mystring m1;
clrscr();
cout<<"\n Enter matrix value:";
m1.get();
m1.put();
-m1;
cout<<"\n after negation matrix";
m1.put();
++m1;
m1.put();
getch();
return 0;
}

