#include<iostream.h>
#include<conio.h>

class employee
 {
  int id,salary,exp;
  long int con;
  char name[20],role[20],add[50],email[20];


  public:

   void setdata()
    {
     cout<<"enter id=";
     cin>>id;
     cout<<endl;
     cout<<"enter salary=";
     cin>>salary;
     cout<<endl;
     cout<<"enter name=";
     cin>>name;
     cout<<endl;
     cout<<"enter role=";
     cin>>role;
     cout<<endl;
     cout<<"enter experience=";
     cin>>exp;
     cout<<endl;
     cout<<"enter address=";
     cin>>add;
     cout<<endl;
     cout<<"enter email=";
     cin>>email;
     cout<<endl;
     cout<<"enter contact=";
     cin>>con;
     cout<<endl;
    }
    void getdata()
     {
      cout<<id<<;
      cout<<endl;
      cout<<salary;
      cout<<endl;
      cout<<name;
      cout<<endl;
      cout<<role;
      cout<<endl;
      cout<<exp;
      cout<<endl;
      cout<<add;
      cout<<endl;
      cout<<email;
      cout<<endl;
      cout<<con;
      cout<<endl;
     }
 };
 void main()
  {
    employee e1,e2,e3,e4,e5;
    clrscr();

    e1.setdata();
    e1.getdata();

    e2.setdata();
    e2.getdata();

    e3.setdata();
    e3.getdata();

    e4.setdata();
    e4.getdata();

    e5.setdata();
    e5.getdata();

    getch();
  }