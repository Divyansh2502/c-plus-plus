#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=i;j<a;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}