#include<bits/stdc++.h>

using namespace std;

int main(){

    int n=11;
    int a[n]={4,2,3,4,4,4,5,6,4,8,4};
    map<int,int> hashMap;
    int ans=-1;
    int num;

    for(int i=0;i<n;i++)
    {
        num=a[i];
        if(hashMap.find(num)==hashMap.end())
            hashMap[num]=0;
        hashMap[num]++;
        if(hashMap[num]>n/2)
        ans=num;
    }

    cout<<ans;
    return 0;
}