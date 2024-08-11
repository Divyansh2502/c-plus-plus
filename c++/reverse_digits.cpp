#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=0;
    int a;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        i=i*10 + a;
    }
    cout<<i;
}