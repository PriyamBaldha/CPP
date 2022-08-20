#include<conio.h>
#include<iostream.h>

class constr
{
 int def,para,copy;

 public:

 constr()
 {
  cout<<"Enter Value for Default Constructor = ";
  cin>>def;
  }

 constr(int para)
 {
   this->para=para;
   }


 void getdata()
 {
  cout<<" Value = "<<def<<endl<<endl;
  }

 void getpara()
 {
  cout<<"Value of Parameterized Constructor = "<<para<<endl;
  }

 };

 void main()
 {
  clrscr();
  cout<<"\tDefault Constructor\n";
  constr cst;
  cst.getdata();
  cout<<"\tParaameterized Constructor\n";
  constr paramt(2);
  paramt.getpara();
  cout<<endl<<"\tCopy Constructor\n";
  constr copi=cst;
  copi.getdata();
  getch();
  }