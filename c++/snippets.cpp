#include<iostream>
using namespace std;

int main()
{
    int a[4]={1,5,8,6};
    int *p= a;
    for (int i=0;i<4;i++)
    {
        cout<<" "<<*(p+i);
    }
}
