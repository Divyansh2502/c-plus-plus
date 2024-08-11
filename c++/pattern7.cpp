#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"ENTER THE NUMBER: ";
    cin>>a;
    int n=a;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            cout<<" ";
        }
        for(int k=n+2;k<=a+2;k++)
        {
            cout<<"#";
        }
        for(int l=i+1;l<a;l++)
        {
            cout<<" ";
        }
        cout<<endl;
        n=n-2;
    }
}