#include<iostream>
using namespace std;

int main()
{
    int a= 7651;
    int b[4];
    int i=0;
    while(a!=0)
    {
        b[i]=a%10;
        a=a/10;
        i++;
    }
    for(int j=0;j<4;j++)
    {
        cout<<"the value of a is "<<b[j]<<endl;
    }
}