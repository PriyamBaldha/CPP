#include<iostream.h>
#include<conio.h>

class time
{
 int h,m;
 public:

 void setdata()
 {
  cout<<"enter your timing=";
  cin>>h;
  cout<<"enter your minute=";
  cin>>m;
 }
 void timing(time t2)
 {
  int h1,m1;

  m1=m+t2.m;
  h1=h+t2.h+(m1/60);
  m1=m1%60;
  cout<<endl<<"time:-"<<h1<<":"<<m1;
 }
};
 void main()
 {
  clrscr();
  time t1,t2;
  t1.setdata();
  t2.setdata();
  t1.timing(t2);
  getch();
 }
