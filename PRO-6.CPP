#include<iostream.h>
#include<conio.h>


class student
 {
  int id;

  public:

  void setdata()
   {
    cout<<"Enter student id=";
    cin>>id;
   }
  void copy(student &s)
   {
    id=s.id;

   }
  void getdata()
   {
     cout<<"\nid="<<id<<endl;
   }
  };
 void main()
  {
    clrscr();
   student s,s1;
   s.setdata();
   s.getdata();
   s1.copy(s);
   s1.getdata();
   getch();
  }