#include<bits/stdc++.h>
using namespace std;

int factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    return a*factorial(a-1);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<factorial(n);
}