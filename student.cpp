#include <stdio.h>
#include<iostream>

using namespace std;
class Person
{
  protected:
  string name,pidno;
  public:
  Person(){}
  Person(string name,string pidno)
  {
      this->name=name;
      this->pidno=pidno;
  }
};


class Student: public Person
{
  private:
  int gradyear;
  string major;
  public:
  Student(string major,int gradyear,string name,string pidno):Person(name,pidno)
  {
      this->gradyear=gradyear;
      this->major=major;
  }
  void displayDetails()
  {
   cout<<"Name :"<<name;
    cout<<"\nPID No :"<<pidno;
    cout<<"\ngradyear :"<<gradyear;   
    cout<<"\nmajor :"<<major;
  }
};

int main()
{
    string name,pidno,major;
    int gradyear;
    cout<<"Enter the student's name\n";
    cin>>name;
    cout<<"Enter the student's pidno\n";
    cin>>pidno;
    cout<<"Enter the student's major\n";
    cin>>major;
    cout<<"Enter the student's gradyear\n";
    cin>>gradyear;
    Student student(major,gradyear,name,pidno);
    student.displayDetails();
    return 0;
}
