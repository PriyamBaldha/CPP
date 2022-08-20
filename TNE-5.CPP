#include<conio.h>
#include<iostream.h>

class A
{
 private:
 int a;

 public:
 void input(int A)
 {
  int b;
  a = A;
  cout<<"Enter a=";
  cin>>A;
  cout<<endl<<"A= "<<A<<endl;
  cout<<"a= "<<a<<endl;
  b=A+a;
  cout<<"b= "<<b;

  }
  };

 void main()
 {
  clrscr();
  A a;
  a.input(2);

  getch();
  }
