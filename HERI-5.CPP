
#include<conio.h>
#include<iostream.h>

class input
{
 public:

 int n;

 void setinput()
 {
//  cout<<"Enter Number = ";
  cin>>n;
  n;
 }



 };

 class square : public input
 {

  public:

  int square;

  void setsquare()
  {
   cout<<"Enter Number for Square = ";
   setinput();
   square = n * n ;

   }

  void getsquare()
  {
   cout<<"Square is = "<<square<<endl;
   }

  };


 class cube : public input
 {
   public:

   int cube;

   void setcube()
   {
    cout<<"Enter Number For Cube = ";
    setinput();
    cube = n * n * n;

    }

   void getcube()
   {
    cout<<"Cube Is = "<<cube;
    }

  };

 class output : public square,public cube
 {
  public:

  void setoutput()
  {
   setsquare();
   setcube();
   }

  void getoutput()
  {
   cout<<"\nSquare\tNumber\n";
   cout<<square<<"\t"<<cube;
    }

  };

 void main()
 {
  clrscr();
  output o;
  o.setoutput();
  o.getoutput();
  getch();
  }