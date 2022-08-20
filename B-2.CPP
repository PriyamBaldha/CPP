#include<conio.h>
#include<iostream.h>

class A
{
 int roll_no;
 char name[20];

 public:

 void getA()
 {
  cout<<"Enter Roll NO=";
  cin>>roll_no;
  cout<<"Enter Name=";
  cin>>name;
  }
 void setA()
 {
  cout<<endl<<roll_no<<"\t"<<name<<"\t";
 }

 };

 class B
 {
  int contact;
  char course[10];

  public:
  A a;
  void getB()
  {
   a.getA();
   cout<<"Enter Contact=";
   cin>>contact;
   cout<<"Enter Course=";
   cin>>course;
   }
  void setB()
  {
   a.setA();
   cout<<contact<<"\t\t"<<course<<endl;
  }
 };

  void main()
  {
   clrscr();
   B b;
   b.getB();
   cout<<endl<<"Roll No\tName\tContact\t\tCourse\n";
   b.setB();
   getch();
   }