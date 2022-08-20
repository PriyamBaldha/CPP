#include<conio.h>
#include<iostream.h>

void main()
{
 int a[20],b[20],i,n;
 clrscr();
 cout<<"Enter Value of n=";
 cin>>n;
 for(i=0;i<n;i++)
    {
     cout<<"a["<<i<<"]=";
     cin>>a[i];
     }
 for(i=0;i<n;i++)
  {
    b[i]=a[i];
  }
 for(i=0;i<n;i++)
  {
    b[i]=b[i]*(b[i]*b[i]);
  }
 cout<<"\nNumber\tCube\n";
 for(i=0;i<n;i++)
  {
    cout<<a[i]<<"\t"<<b[i]<<endl;
  }
 getch();
}
