#include<iostream>
using namespace std;

void selection_sort(int a[])
{
    for(int i=0;i< 5;i++)
    {
        int c=i;
        for(int j=i+1;j<5;j++)
        {
            if(a[j]<a[c])
            {
               c =j;
            }
        }
            int d=a[c];
            a[c]=a[i];
            a[i]=d;
    }
}
int main()  
{
    int a[5]={8,6,5,7,3};
    selection_sort(a);
    for(int k=0;k<5;k++)
    {
        cout<<"the value of a is "<<a[k]<<endl;
    }
}
    // int b;
    // for(int i=0;i<5;i++)
    // {
    //     b[i]=a[i];
    //     for(int j=0;j<5;j++)
    //     {
    //         if(a[j+1]<b[i])
    //         {
    //             a[j]=a[j+1];
    //             a[j+1]=b[i];
    //         }
    //     }
    // }