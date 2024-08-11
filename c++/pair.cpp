#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int ,int> p= {1,3};
    cout<<""<<p.first<<","<<p.second<<endl;
    pair<int ,pair<int ,int>>a={1,{3,5}};
    cout<<a.first<<""<<a.second.second<<""<<a.second.first<<endl;
    cout<<a.first<<a.second.first<<a.second.second<<endl;
    pair<int ,int>arr[]={{1,3},{3,4},{4,5}};
    cout<<arr[0].second<<arr[1].first<<arr[2].second<<endl;
}