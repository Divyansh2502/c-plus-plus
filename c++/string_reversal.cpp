#include<bits/stdc++.h>
using namespace std;

void string_reversal(string &s,int i,int n)
{
    if(i>=n/2)
    {
        return;
    }
    swap(s[i],s[n-i-1]);
    string_reversal(s,i+1,n);
}

int main()
{
    string s1,s2;
    cout<<"Enter a string: ";
    cin>>s1;
    s2=s1;
    int n= s1.length();
    int i=0;
    string_reversal(s1,i,n);
    if(s1==s2)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}