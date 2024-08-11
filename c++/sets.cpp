#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<string> s= {"sumit"};
    s.insert("divyansh");
    s.insert("rahul");
    s.insert("rishi");
    auto it= s.find("divyansh");
    cout<<it;

    return 0;
}
    // int n= 5;
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     string str;
    //     cin >> str;
    //     s.insert(str);
    // }
    // for (auto it : s) {
    //     cout << it << endl;  // Print each string on a new line
    // }
    // vector<int> arr={1,4,3,6,8};

    // set<int> st;
    // for(auto it: arr )
    // {
    //     st.insert(it);
    // }
    // for(auto it: st )
    // {
    //     cout<<it<<" ";
    // }
    // cout<<st.begin();