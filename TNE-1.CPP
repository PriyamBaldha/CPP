#include<conio.h>
#include<iostream.h>

class Distance
{
 int feet,inch;
 public:

 void input()
 {
  cout<<"Enter Feet=";
  cin>>feet;
  cout<<"Enter Inch=";
  cin>>inch;

  }

 void output()
 {
  cout<<feet<<"\t"<<inch<<endl;
  }

 void sum(Distance d2)
  {
    int sum,F,I;
    F=d2.feet + feet;
    I=d2.inch + inch;
    if(I>12)
       {
	I-=12;
	F++;
	}

    sum=F+I;
    cout<<F<<"\t"<<I;
  }
  };

void main()
{
 clrscr();
 Distance d1,d2;
 d1.input();
 d2.input();
 cout<<"\nFeet\tInch\n";
 d1.output();
 d2.output();
 cout<<"\nSum is\nFeet\tInch\n";
 d1.sum(d2);
 getch();
 }