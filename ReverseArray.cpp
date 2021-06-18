#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Solving...";
    vector<int> array={5,3,12,45,56,21,9};
    int i,n,temp;
    n=array.size();

    for(i=0;i<(array.size()/2);i++)
    {
       temp=array[i];
       array[i]=array[array.size()-i-1];
       array[array.size()-i-1]=temp; 
    }

    cout<<"\n\n";
    for(i=0;i<n;i++)
    cout<<array[i];
    return 0;
}