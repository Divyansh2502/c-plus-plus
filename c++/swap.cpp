#include<bits/stdc++.h>
using namespace std;

void swaping(int arr[],int i,int n)
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    swaping(arr,i+1,n);
}

int main()
{
    int counter = 0;
    int a[5]={1,2,3,4,5};
    swaping(a,counter,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
}
