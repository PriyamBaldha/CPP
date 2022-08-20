#include<conio.h>
#include<iostream.h>

class def_const
{
 int a;
 public:

 def_const()
 {
  cout<<"\t\tThis Is An Example Of Default Constructor\n";
  cout<<"a=";
  cin>>a;
 }

 void getdata()
 {
  cout<<endl<<"a = "<<a;
 }

 };

 void main()
 {
  clrscr();
  def_const d;
  d.getdata();
  getch();
 }