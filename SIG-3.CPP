#include<conio.h>
#include<iostream.h>

class distance
{
 int km,m;

 public:

 void setdata()
 {
  cout<<"Enter Kilometer = ";
  cin>>km;
  cout<<"Enter Meter = ";
  cin>>m;
  cout<<endl;
  }

 void operator+(distance d1)
 {

  int KM,M,c;
  M = d1.m + m;
  KM = d1.km + km + M/1000;
  M = M%1000;

  c = KM + M;

  cout<<KM<<" Kilometer "<<M<<" Meters ";
  }

  };

  void main()
  {
   clrscr();
   distance d,d1;
   cout<<"Enter First Object's Distance "<<endl;
   d.setdata();
   cout<<"Enter Second Object's Distance "<<endl;
   d1.setdata();
   d.operator+(d1);
   getch();
   }
