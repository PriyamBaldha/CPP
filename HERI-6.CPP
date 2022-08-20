#include<conio.h>
#include<iostream.h>

class A
{
 protected:

 int id,salary,exp,contact;
 char name[20],role[20],comp_name[20],email[20],address[20];

 void setA()
 {
  cout<<"Enter Id = ";
  cin>>id;
  cout<<"Enter Name = ";
  cin>>name;
  cout<<"Enter Role = ";
  cin>>role;
  }

};

class B : public A
{
 protected:

 void setB()
 {
  setA();
  cout<<"Enter Salary = ";
  cin>>salary;
  cout<<"Enter Expirience = ";
  cin>>exp;
  }

 };

class C : public B
{
 protected:

 void setC()
 {
  setB();
  cout<<"Enter Company_Name = ";
  cin>>comp_name;
  cout<<"Enter Address = ";
  cin>>address;
  }

 void getC()
 {
  cout<<name<<"\t"<<role<<"\t"<<salary;
  }

 };


 class D : public C
 {
  public:

  void setD()
  {
   setC();
   cout<<"Enter Email = ";
   cin>>email;
   cout<<"Enter Contact = ";
   cin>>contact;
   }

  void getD()
  {

   cout<<"Id\tName\tRole\tSalary\tExpirience\tComp_Name\tAddress\tEmail\tContact\n";
   cout<<id<<"\t"<<role<<"\t"<<salary<<"\t"<<exp<<"\t"<<comp_name<<"\t"<<address<<"\t"<<email<<"\t"<<contact;
   }

  };

  void main()
  {
   clrscr();
   D d;
   d.setD();
   d.getD();
   getch();
   }
