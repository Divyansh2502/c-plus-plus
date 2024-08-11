#include<bits/stdc++.h>
using namespace std;

void vectors()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<","<<v[1]<<endl;
    v.push_back(4);
    cout<<v[2]<<endl;
}

void pair_vectors()
{
    vector<pair<int,int>>vec;   
    vec.push_back({1,2});
    vec.push_back({3,4});
    cout<<vec[0].first<<vec[1].second<<endl;
}
void another_vector()
{
    vector<int>v(5,100);
    cout<<v[0]<<endl;
    v.push_back(6);
    cout<<v[5]<<endl;
}
void iteration()
{
    vector<int>a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);
    vector<int>::iterator it=a.begin();
    for(int i=0; i<3; i++)
    {
        cout<<(*it)<<endl;
        it++;
    }

}

int main()
{
    another_vector();
    vectors();
    pair_vectors();
    iteration();
}