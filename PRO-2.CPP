#include<conio.h>
#include<iostream.h>
#include<string.h>

class parameter
{
 int id;
 char name[20];
 public:

 parameter(int id,char name[])
 {
  this->id=id;
  strcpy(this->name,name);
 }

  void getdata()
  {
   cout<<"\t"<<endl;
   cout<<endl<<"ID\tNAME\n";
   cout<<id<<"\t"<<name;
  }
 };

  void main()
  {
   clrscr();
   parameter p1(101,"Priyam");
   parameter p2(102,"Sahil");
   p1.getdata();
   p2.getdata();
   getch();
  }