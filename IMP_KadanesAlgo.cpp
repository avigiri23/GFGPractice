#include<bits/stdc++.h>

using namespace std;

int main(){
    int array[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n= sizeof(array)/sizeof(array[0]);
    int msf=-9999, meh=0;           //max so far, max ending here
    int a,b;  //start and end points of the largest sum contiguous array

    for(int i=0;i<n;i++)
    {
        meh+=array[i];
        if(meh<array[i])
            meh=array[i];
        if(meh>msf)
        msf=meh;
    }

    cout<<"max contiguous subarray is: "<<msf;
    return 0;
}


//MOD: FIND THE SUB ARRAY AS WELL