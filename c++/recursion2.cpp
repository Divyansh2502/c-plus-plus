#include<bits/stdc++.h>
using namespace std;

void recursion(int a,int b)
{
    if(a>b)
    {
        return;
    }
    cout<<a<<endl;
    a++;
    recursion(a,b);
}

int main()
{
    int i=1;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    recursion(i,n);
}