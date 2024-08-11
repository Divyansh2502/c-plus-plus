#include<bits/stdc++.h>
using namespace std;

void divisors(int a)
{
    int j=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i == 0)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    divisors(n);
}