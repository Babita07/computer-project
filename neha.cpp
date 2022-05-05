#include<iostream>
#include<string>
using namespace std;
   
 class employee
 {
    
    private:
     string name,add;
     int id;
     long int salary;
    public:
      employee();
      employee(string n,int id,long int s,string a);
      employee(employee &e);
      void display();
 
 
 };
 employee::employee(){
  name="";
  salary=0;
  id=0;
  add="";
}
employee::employee(string n,int i,long int s,string a)
{
    name=n;
    id=i;
    salary=s;
    add=a;
}
 employee::employee(employee &e)
 {
     name=e.name;
     id=e.id;
     salary=e.salary;
     add=e.add;
 }
  void employee::display()
  {
      cout<<"name:"<<name<<" id"<<id<<" salary:"<<salary<<" address:"<<add<<endl;
  }
     int main()
     {
         employee e1;
         employee e2("neha",50,50000,"Imadol");
         employee e3(e2);
         cout<<"employee e1:";
         e1.display();
         cout<<"employee e2:";
         e2.display();
         cout<<"employee e3:";
         e3.display();
         return 0;
     }