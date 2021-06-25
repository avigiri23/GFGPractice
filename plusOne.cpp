#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=3;
    vector<int> arr={9,9,9};      //Output should be 123+1={1,2,4}
    int carry=1;

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]+carry>9){
            arr[i]=0;
            carry=1;
        }
        else if(arr[i]+carry<9){
        arr[i]+=carry;
        carry=0;
        }
    }
    if(carry==1)
    arr.insert(arr.begin(),carry);
    for(int x: arr)
    cout<<x<<" ";
    return 0;


}