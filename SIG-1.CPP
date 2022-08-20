#include<conio.h>
#include<iostream.h>

class unary
{
 int inc,dec;

 public:

 void setdata()
 {
  cout<<"Enter Value of inc = ";
  cin>>inc;
  cout<<"Enter Value of dec = ";
  cin>>dec;
  }

 void operator++()
 {
  inc++;
  }

 void operator--()
 {
  dec--;
  }

 void getdata()
 {
  cout<<endl<<"Value of inc after Increment = "<<inc<<endl;
  cout<<endl<<"Value of dec after Decrement = "<<dec<<endl;
  }

 };

 void main()
 {
  clrscr();
  unary u;
  u.setdata();
  u.operator++();
  u.operator--();
  u.getdata();
  getch();
  }