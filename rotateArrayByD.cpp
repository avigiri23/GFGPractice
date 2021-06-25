#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=10,d=3;
    int arr[n]={2,4,6,8,10,12,14,16,18,20};
    // for(int i=0;i<d;i++)        //no. of single shifts(d=2 means 2 times single shift, O(N*d) complexity)
    // {
    //     int l=0;
    //     int h=n-1;
    //     while(l<h){
    //         int temp=arr[l];
    //         arr[l]=arr[h];
    //         arr[h]=temp;
    //         h--;
    //     }
    // }
    // for(int x:arr)
    // cout<<x<<" ";


    //with O(n) time complexity
    vector<int> arrd;
    for(int i=0;i<d;i++)
        arrd.push_back(arr[i]);

    for(int i=0;i<n-d;i++)
    {
        arr[i]=arr[i+d];
    }
    int j=0;
    for(int i=n-d;i<n;i++)
    {
        arr[i]=arrd[j];
        j++;
    }
    
    for(int x: arr)
    cout<<x<<" ";
    

    return 0;
}