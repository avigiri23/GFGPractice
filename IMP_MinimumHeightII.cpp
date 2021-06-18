#include<bits/stdc++.h>

using namespace std;

int main(){
    int array[]={1,5,8,10};
    int k=2;
    int n=sizeof(array)/sizeof(array[0]);
    
    sort(array,array+n);

    int piv, minDif=INT16_MAX;
    int big,small;

    for(int i=1;i<=n-1;i++)
    {
        if(array[i]<k)
        continue;
        piv=i;
        big=max(array[piv-1]+k,array[n-1]-k);
        small=min(array[0]+k,array[piv]-k);
        if(big-small<minDif)
            minDif=big-small;

    }
    cout<<minDif;
    return 0;
}


//works for {3, 9, 12, 16, 20}, 3
//works for {1, 5, 8, 10},2