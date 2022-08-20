#include<conio.h>
#include<iostream.h>

class personal_info
{
 char name[20],city[20],gender[20];
 int age;

 protected:

 void per_info()
 {
  cout<<"Enter Emp Name = ";
  cin>>name;
  cout<<"Enter Emp Age = ";
  cin>>age;
  cout<<"Enter Emp Gender = ";
  cin>>gender;
  cout<<"Enter Emp City = ";
  cin>>city;
  }

 void pear_info()
 {
   cout<<"Name\tAge\tGender\tCity"<<endl;
   cout<<name<<"\t"<<age<<"\t"<<gender<<"\t"<<city<<endl;
  }

 };

class Dept_info
{
 int id,salary;
 char dept_name[20],post[20];

 protected:

 void dept_info()
 {
  cout<<"Enter Emp Id = ";
  cin>>id;
  cout<<"Enter Emp Dept_name = ";
  cin>>dept_name;
  cout<<"Enter Emp Post = ";
  cin>>post;
  cout<<"Enter Emp Salary = ";
  cin>>salary;
  }

 void dept()
 {

     cout<<"Id\tDept_name\tPost\tSalary\n";
   cout<<id<<"\t"<<dept_name<<"\t\t"<<post<<"\t"<<salary<<endl;

  }
 };

 class Employee : public personal_info,public Dept_info
 {
  public:

  void setdata()
  {
   cout<<"Enter Employee's Personal Data\n";
   per_info();
   cout<<"Enter Employee's Work Data\n";
   dept_info();
   }

  void getdata()
  {

   cout<<"\nPearsonal Info\n";
   pear_info();
   cout<<"\nWork Information\n";
   dept();
   }

  };


  void main()
  {
   clrscr();
   Employee e;
   e.setdata();
   e.getdata();
   getch();
   }

