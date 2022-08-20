#include<iostream.h>
#include<conio.h>
class num
{
 int no;
 public:
void nom()
 {
  cout<<"enter number:";
  cin>>no;
 }
};
class squar:public num
{
  int no,sqr;
  void sq()
  {
  nom();
  sqr=no*no;
 }
};
class cube:public num
{
  int no,cube;
  void cu()
  {
  nom();
  cube=no*no*no;
  }
};

void main()
{
 clrscr();
 num n1;
 squar s1;
 cube n2;
 n1.nom();
 //s1.sq();
 //n1.cu();
 getch();
}


