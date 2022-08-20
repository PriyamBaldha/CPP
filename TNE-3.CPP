#include<conio.h>
#include<iostream.h>

class Time
{
 int h,m,s;

 public:

 void input()
 {
  cout<<"Enter Seconds=";
  cin>>s;
  }

  void calc()
  {
   int H,M,S;
   S = s;
   M = S/60;
   H = M/60;
   S = S%60;
   M=M%60;

   cout<<endl<<H<<"\t"<<M<<"\t"<<S<<endl;
   }
  };


 void main()
 {
  clrscr();
  Time t1;
  t1.input();
  cout<<"\nHours\tMinutes\tSeconds";
  t1.calc();
  getch();
  }