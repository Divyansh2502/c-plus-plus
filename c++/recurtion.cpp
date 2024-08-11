#include<bits/stdc++.h>
using namespace std;

void recursion(int a)
{
    if(a>=5)
    {
        return;
    }
    cout<<"5"<<endl;
    a++;
    recursion(a);
}

int main()
{
    int i=0;
    recursion(i);
}