#include<bits/stdc++.h>
using namespace std;

void finding_prime(int a)
{
    int j=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            j++;
        }
    }
    if(j==2)
    {
        cout<<"It is prime number";
    }
    else if(j>2)
    {

        cout<<"It is not a prime number";
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    finding_prime(n);
}
    // int j=0;
    // for(int i=1;i<a;i++)
    // {
    //     if(a/i==1.0)
    //     j++;
    // }
    // if(j>0)
    // {
    //     cout<<"this is prime number";
    // }
    // else
    // {
    //     cout<<"this is not a prime number";
    // }