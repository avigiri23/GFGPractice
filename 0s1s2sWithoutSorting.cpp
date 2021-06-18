#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr={0,1,2,1,2,0,0,1,2,0,2,0,1,2,2,1};
    int n=arr.size();
    int temp;
    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            mid++;
            low++;
            continue;
        }
        if(arr[mid]==1)
        {
            mid++;
            continue;
        }
        if(arr[mid]==2)
        {
            temp=arr[high];
            arr[high]=arr[mid];
            arr[mid]=temp;
            high--;
            continue;
        }
    }

    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";

    return 0;
}