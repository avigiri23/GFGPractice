#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr1={1, 2, 5, 6, 2, 3, 5};
    vector<int> arr2={2, 4, 5, 6, 8, 9, 4, 6, 5};

    set<int> s;
    for(int i=0;i<arr1.size();i++)
    s.insert(arr1[i]);

    for(int i=0;i<arr2.size();i++)
    s.insert(arr2[i]);

    cout<<s.size()<<" ";



    return 0;
}