#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
 int i,n=0;
 char s[20];
 clrscr();
 cout<<"Enter Your Value=";
 cin>>s;
 for(i=0;i<strlen(s);i++)
  {
    if(s[i]>='0' && s[i]<='9')
   {
     n++;
   }
}
    if(n>0)
   {
    cout<<"It is numeric";
   }
    else
   {
    cout<<"It isn't numeric";
   }
  getch();
  }
