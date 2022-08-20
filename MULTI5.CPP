#include<iostream.h>
#include<conio.h>
class shape
{
 int r,l,h;
 public:
 int area(int r)
 {
  return 3.14*r*r;
 }

 int area(int l,int h)
 {
  return 1/2*l*h;
 }
};
void main()
{
shape s1;
cout<<"cricle=";
cout<<s1.area (4);

cout<<"triangle=";
cout<<s1.area(10,22);
getch();
}