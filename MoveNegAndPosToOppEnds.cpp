#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int low=0,high=arr.size()-1;
    int temp;

    while(low<=high){
        if(arr[low]>=0)
        {
            temp=arr[low];      //swap
            arr[low]=arr[high];
            arr[high]=temp;

            high--;
        }
        else
        {
            low++;
        }
    }

    for(int item:arr)
    cout<<item<<" ";
    return 0;
}