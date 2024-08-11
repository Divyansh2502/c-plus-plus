#include<bits/stdc++.h>
using namespace std;

void recursion(int a, int b)
{
    if(a>=b)
    {
        return;
    }
    cout<<(b-a)<<endl;
    a++;
    recursion(a,b);
}

int main()
{
    int n;
    int i=0;
    cout<<"Enter a number: ";
    cin>>n;
    recursion(i,n);
}