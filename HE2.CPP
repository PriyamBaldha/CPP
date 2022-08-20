#include<iostream.h>
#include<conio.h>
class area
{
 int l,h;
 public:
 void seta()
 {
  cout<<"enter l and h";
  cin>>l>>h;
 }
 void geta()
 {
  cout<<"L AND H"<<l<<h;
 }
};
class triagle:public area
 {
  int area;
    public:
    sett()
    {
     seta();
     geta();
     area=l*h/2;
    }
    gett()
    {
      cout<<"AREA="<<area;
    }
 };
class rectangle:public area
 {
 {
  int area;
    public:
    setr()
    {
     seta();
     geta();
     area=l*h;
    }
    getr()
    {
      cout<<"AREA="<<area;
    }
 };
 void main()
 {
  clrscr();
  area a1;
  a1.sett();
  a1.gett();

  a1.setr();
  a1.setr();
  getch();
 }