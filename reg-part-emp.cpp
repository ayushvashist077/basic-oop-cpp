#include<iostream>

using namespace std;

class employee
{
  protected:
  char name[20];
  int id,bsal;

};

class regular:public employee
{
  float hra,da,grdp;
  public:
  void get()
  {
    cout<<"Enter name: ";
    gets(name);
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Salary: ";
    cin>>bsal;
    hra=0.05*bsal;
    da=0.5*bsal;
    grdp=hra+da+bsal;
  }

  void print()
  {
    cout<<"Name: "<<name<<"\nID: "<<id;
    cout<<"\nBasic salary: "<<bsal;
    cout<<"\nHRA: "<<hra;
    cout<<"\nDA: "<<da;
    cout<<"\nGrade Pay: "<<grdp;
  }
};

class parttime:public employee
{
  int hrs,pph,sal;
  public:

  void get()
  {
    cout<<"Enter name: ";
    cin>>ws;
    gets(name);
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Basic Salary: ";
    cin>>bsal;
    cout<<"Enter Hours: ";
    cin>>hrs;
    cout<<"Enter Pay per hour: ";
    cin>>pph;
    sal=bsal+(hrs*pph);
  }
  void print()
  {
    cout<<"\n\nName: "<<name<<"\nID: "<<id;
    cout<<"\nHours: "<<hrs;
    cout<<"\nPay per hr: "<<pph;
    cout<<"\nTotal salary: "<<sal;
  }

};

int main()
{
  regular r;
  parttime p;
  cout<<"For Regular Employee:\n";
  r.get();
  cout<<"\nFor Part-time Employee:\n";
  p.get();
  cout<<"\n\n";
  r.print();
  p.print();
  return 0;
}
