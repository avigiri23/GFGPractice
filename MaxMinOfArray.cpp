#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> array={5,3,12,45,56,21,9};
    sort(array.begin(),array.end());

    cout<<"min: "<<array[0]<<"\n";
    cout<<"max: "<<array[array.size()-1];

}