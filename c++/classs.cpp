#include<iostream>
using namespace std;

class employee
{
    public:
        char name[30];
        int age;
    private:
        long salary;

};

 void employee :: salary= 4000000;

int main ()
{
    employee harry;
    harry.age=19;
    harry.name= "Divyansh Upadhyay";
    cout<<"the name is: "<<harry.name<<endl;
    cout<<"the age is: "<<harry.age<<endl;
    cout<<"the salary is "<<harry.salary<<endl;
    return 0;
}