#include<iostream.h>
#include<conio.h>

class Z;
class A
{
 int a;
 public:

 void setdata()
 {
  cout<<"Enter Value of a=";
  cin>>a;
  }


 friend void sum(A a1,Z z1);
 };

 class Z
 {
  int z;
  public:

  void setdata()
  {
   cout<<"\nEnter Value of z=";
   cin>>z;
   }

   void getdata()
   {
    cout<<"z="<<z;
    }

   friend void sum(A a1,Z z1);
   };

  void sum(A a1,Z z1)
  {
   int C;
   C=a1.a + z1.z;
   cout<<"\nC="<<C;
   }

  void main()
  {
   clrscr();
   A a1;
   Z z1;

   a1.setdata();
   z1.setdata();

   sum(a1,z1);
   getch();
   }