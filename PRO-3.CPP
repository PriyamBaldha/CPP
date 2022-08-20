#include<iostream.h>
#include<conio.h>

class item
 {
   int a;
   public:

   item()
    {
      cout<<"Enter a=";
      cin>>a;
    }
   void getdata()
    {
     cout<<a<<endl;
    }
  };
    void main()
     {
      clrscr();
      item it;
      it.getdata();
      item it1=it;

      it1.getdata();

      getch();
     }