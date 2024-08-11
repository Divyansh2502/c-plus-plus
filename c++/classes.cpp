#include <bits/stdc++.h>
using namespace std;

class employee
{
    long a;
    string s;
    int i;

    public:
    void name();
    void salary();
    void age();
};

void employee::age()
{
    cout<<"What is age: ";
    cin>>i;
    cout<<i<<endl;
}

void employee::name()
{
    cout<<"what is name: ";
    cin>>s;
    cout<<s<<endl;
}

void employee::salary()q
{
    cout<<"what is salary: ";
    cin>>a;
    cout<<a<<endl;
}

int main()
{
    employee first;
    first.name();
    first.age();
    first.salary();
}