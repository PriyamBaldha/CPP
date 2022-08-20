#include<iostream.h>
#include<conio.h>
#include<string.h>
class  animal
 {
  public:
  int age;
  char name[30];
  void setdata(int a,char n)
   {
     age=a;
     name=n;
   }
  };
class zebra:public animal
 {
  public:
  int age;
  char name[100],type[20],placeoforigin[30];
  void seta()
   {
    seta();
    cout<<"enter name type,place =";
    cin>>age>>name>>type>>placeoforigin;
   }
class dolphin:public animal
 {
  public:
  int age;
  char name[100],type[20],placeoforigin[30];
  void setb()
   {
    seta();
    cout<<"enter name type,place =";
    cin>>age>>name>>type>>placeoforigin;
   }

void main()
 {
  clrscr();
  zebra z1;
  dolphin d1;
  z1.setdata(3,"a");
  d1.setdata(6,"b");
  z1.seta();
  d1.setb();
  getch();
 }


