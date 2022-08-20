#include<conio.h>
#include<iostream.h>

class binary
{
 int a;

 public:

 void setdata()
 {
  cout<<"Enter Value of a= ";
  cin>>a;
  }

 operator+(binary b1)
 {
  int c;

  c= a+b1.a;
  cout<<c;
  }

  };

 void main()
 {
  clrscr();
  binary b,b1;
  b.setdata();
  b1.setdata();
  cout<<endl<<"Sum of Two Object is ";
  b.operator+(b1);
  getch();
  }