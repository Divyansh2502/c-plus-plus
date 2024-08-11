#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int n=a;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" "<<(j+1);
        }
        n--;
        cout<<endl;
    }
    
}