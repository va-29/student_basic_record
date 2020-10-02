#include <stdio.h>
#include<iostream>

using namespace std;
class Person
{
  protected:
  string name,pin_no;
  public:
  Person(){}
  Person(string name,string pin_no)
  {
      this->name=name;
      this->pin_no=pin_no;
  }
};


class Student: public Person
{
  private:
  int gradyear;
  string major;
  public:
  Student(string major,int gradyear,string name,string pin_no):Person(name,pin_no)
  {
      this->gradyear=gradyear;
      this->major=major;
  }
  void displayDetails()
  {
   cout<<"Name :"<<name;
    cout<<"\nPIN No :"<<pin_no;
    cout<<"\ngradyear :"<<gradyear;   
    cout<<"\nmajor :"<<major;
  }
};

int main()
{
    string name,pin_no,major;
    int gradyear;
    cout<<"Enter the student's name\n";
    cin>>name;
    cout<<"Enter the student's PIN no\n";
    cin>>pin_no;
    cout<<"Enter the student's major\n";
    cin>>major;
    cout<<"Enter the student's gradyear\n";
    cin>>gradyear;
    Student student(major,gradyear,name,pin_no);
    student.displayDetails();
    return 0;
}
