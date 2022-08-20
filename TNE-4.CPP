#include<conio.h>
#include<iostream.h>

class House
{
 int h_no,rooms;
 char h_name[20];
 char city[20],adrs[50];

 public:

 void input()
 {
  cout<<"Enter House Name=";
  cin>>h_name;
  cout<<"Enter House No.=";
  cin>>h_no;
  cout<<"Enter Total Rooms In House=";
  cin>>rooms;
  cout<<"Enter Address=";
  cin>>adrs;
  cout<<"Enter City Name=";
  cin>>city;
  }

  void output()
  {
 //  cout<<endl<<"House Name\tHouse No\tRooms\tAddress\t\tCity\n";
   cout<<h_name<<"\t"<<h_no<<"\t\t"<<rooms<<"\t"<<adrs<<"\t"<<city<<endl;
   }

 };

 void main()
 {
  int i,n;
  clrscr();
  cout<<"Enter How Many House Details You want to enter=";
  cin>>n;
  House h[10];
  for(i=1;i<=n;i++)
  {
  h[i].input();
  }
  cout<<endl<<"House Name\tHouse No\tRooms\tAddress\t\tCity\n\n";
  for(i=1;i<=n;i++)
  {
  h[i].output();
  }
  getch();
  }