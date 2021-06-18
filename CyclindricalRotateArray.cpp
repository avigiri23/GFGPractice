#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int l,h,temp;
    l=0;
    h=sizeof(arr)/sizeof(arr[0])-1;
    while(l<=h)
    {
        temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        l++;
    }

    for(int x:arr)
    cout<<x<<" ";
    return 0;
}