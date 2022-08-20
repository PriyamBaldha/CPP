#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
 char a;
 clrscr();
 cout<<"Enter Your Charcter=";
 cin>>a;
 if(a=='a' || a=='e'  || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' ||  a=='O' || a=='U')
   {
     cout<<"Your Character Is Vowel";
   }
 else
   {
     cout<<"Your Character Is Consonent";
   }
 getch();
}