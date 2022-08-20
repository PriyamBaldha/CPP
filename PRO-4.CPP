#include<conio.h>
#include<iostream.h>

class A
{
 int id;
 public:

 A()
 {
  cout<<"Enter id=";
  cin>>id;
  }

 void getdata()
 {
  cout<<"\nid = "<<id;
  }

  ~A()
   {
    cout<<endl<<"SuccesFully Destructed";
    }
 };

 //PRESS ALT+F5 AFTER RUNNING THE PROGRAM
  void main()
  {
   clrscr();
   A a;
   a.getdata();
   getch();
   }