#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1(1,2); //{2}
    vector<int> vec2(3,4); //{4,4,4}

    vector<int> vec3(vec2.begin(), vec2.end()); //vector will be filled with elements of vec2 from begining to end.
    for(int i=0; i<vec3.size();i++)
    {
        cout<<vec3[i]<<" "<<endl;
    }
}