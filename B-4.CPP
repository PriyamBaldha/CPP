#include<conio.h>
#include<iostream.h>

class HighSchool
{
 int id,roll_no,std,age,cntct;
 char name[20],school_name[20],address[20];
 static int count;

 public:

 void setdata()
 {
  cout<<"Enter Student Id=";
  cin>>id;
  count++;
  cout<<"Enter Student Roll No=";
  cin>>roll_no;
  count++;
  cout<<"Enter Studnet Name=";
  cin>>name;
  count++;
  cout<<"Enter Student Contact No=";
  cin>>cntct;
  count++;
  cout<<"Enter Student Age=";
  cin>>age;
  count++;
  cout<<"Enter Student Address=";
  cin>>address;
  count++;
  cout<<"Enter SchoolName=";
  cin>>school_name;
  count++;
 }

 void getdata()
 {
  cout<<endl<<id<<"\t"<<roll_no<<"\t"<<name<<"\t"<<cntct<<"\t"<<age<<"\t"<<address<<"\t"<<school_name<<endl;
  }

  void kount()
  {
   cout<<endl<<"Total Records Inserted In Class HighSchool are "<<count<<endl;
   }
};

 int HighSchool::count;

class Institute
{
 int id,roll_no,course,age,cntct;
 char name[20],institute_name[20],address[20];
 static int count1;
 public:

  void setdata()
 {
  cout<<"Enter Student Id=";
  cin>>id;
  count1++;
  cout<<"Enter Student Roll No=";
  cin>>roll_no;
  count1++;
  cout<<"Enter Student Name=";
  cin>>name;
  count1++;
  cout<<"Enter Student Contact No=";
  cin>>cntct;
  count1++;
  cout<<"Enter Student Age=";
  cin>>age;
  count1++;
  cout<<"Enter Student Address=";
  cin>>address;
  count1++;
  cout<<"Enter InstituteName=";
  cin>>institute_name;
  count1++;
 }

 void getdata()
 {
  cout<<endl<<id<<"\t"<<roll_no<<"\t"<<name<<"\t"<<cntct<<"\t"<<age<<"\t"<<address<<"\t"<<institute_name<<endl;
  }

 void kount1()
  {
   cout<<endl<<"Total Records Inserted In Class Institute are "<<count1;
   }
};

  int Institute::count1;

void main()
{
 clrscr();
 HighSchool h;
 Institute i;
 cout<<endl<<"ENTER HIGHSCHOOOL'S STUDENT'S DATA"<<endl;
 h.setdata();
 cout<<endl<<"ID\tRollNo\tName\tContact\tAge\tAddress\tHighSchool-Name"<<endl;
 h.getdata();
 h.kount();
 cout<<endl<<"ENTER INSTITUTE'S STUDENT'S DATA"<<endl;
 i.setdata();
 cout<<endl<<"ID\tRollNo\tName\tContact\tAge\tAddress\tInstitute-Name"<<endl;
 i.getdata();
 i.kount1();
 getch();
 }