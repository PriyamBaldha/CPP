#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<math.h>
void main()
{
 int a[20],i,n;
 clrscr();
 cout<<"Enter Value of n=";
 cin>>n;
 for(i=0;i<n;i++)
  {
     cout<<"a["<<i<<"]=";
     cin>>a[i];
  }
cout<<"\nNumber\tSquareRoot\n";
 for(i=0;i<n;i++)
  {
    cout<<a[i]<<"\t"<<sqrt(a[i])<<endl;
  }
 getch();
}