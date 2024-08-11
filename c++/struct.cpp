#include <bits/stdc++.h>
using namespace std;

typedef struct employee
{
    string name;
    int age;
    long salary;
} ep;

int main()
{
    ep employee;
    cout << "the name of employee is: " << endl;
    cin >> employee.name;
    cout << "the age of "<< employee.name<<" is: "<< endl;
    cin >> employee.age;
    cout<<"the salary of "<<employee.name<<"is "<<endl;
    cin>>employee.salary;
    cout<<"the name is "<<employee.name<<endl;
    cout<<"the age is "<<employee.age<<endl;
    cout<<"the salary is "<<employee.salary<<endl;
}