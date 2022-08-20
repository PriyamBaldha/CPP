#include<conio.h>
#include<iostream.h>
#include<string.h>

class Hotel
{
 int id,staff_size,room_size,est_yr,rating_type;
 char name[20],address[20],website[20];

 public:

 void setdata(int id,char name[],char address[],int staff_size,int room_size,int est_yr,int rating_type,char website[])
 {

  this->id=id;
  this->staff_size=staff_size;
  this->room_size=room_size;
  this->est_yr=est_yr;
  this->rating_type=rating_type;
  strcpy(this->name,name);
  strcpy(this->address,address);
  strcpy(this->website,website);
  }

 void getdata()
 {
  cout<<endl<<id<<"  "<<name<<" "<<address<<"   "<<staff_size<<"      "<<room_size<<"       "<<est_yr<<"    "<<rating_type<<"     "<<website<<endl;
  }
};
 void main()
 {
  clrscr();
  Hotel h1,h2;
  cout<<endl<<"Id Name     Address Stf_size Room_size Est_yr Rating Website"<<endl;
  h1.setdata(1,"Raj Hotel","Surat",200,180,2011,5,"rajhotel.com");
  h1.getdata();
  cout<<endl<<"Id Name     Address Stf_size Room_size Est_yr Rating Website"<<endl;
  h2.setdata(2,"Amiras Hotel","Vapi",400,100,2012,7,"amirashotel.com");
  h2.getdata();
  getch();
  }