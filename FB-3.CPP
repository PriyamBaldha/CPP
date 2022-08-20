#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[20];
  int i;
  clrscr();
  cout<<"Enter Your String:=";
  cin>>a;
  for(i=0;i<=strlen(a);i++)
  {
   if(a[i]>=65 && a[i]<=92)
   {
    a[i]=a[i]+32;
   }
   else if(a[i]>=97 && a[i]<=122)
   {
    a[i]=a[i]-32;
   }
  }
  cout<<"NOW YOUR STRING IS CHANGE:="<<a;
  getch();
}