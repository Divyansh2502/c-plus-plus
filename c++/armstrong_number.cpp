#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,b,f;
    cout<<"enter the number: ";
    cin>>n;
    f=n;
    c=0;
    int d=0;
    while(n>0)
    {
        b=n%10;
        d=d + b*b*b;
        n=n/10;
    }
    if(d==f)
    {
        cout<<"Ture";
    }
    else 
    {
        cout<<"False";
    }
}
        // c=c*10 +b;