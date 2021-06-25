#include<bits/stdc++.h>

using namespace std;

int main()
{
    //calculate sum of all n numbers; that should be the ideal sum of the array. then calculate the sum of all array elements, and the
    //difference is the missing number. O(n) time, const. space

    int n=8;
    int array[n-1]={1,2,4,6,3,7,8};
    int totSum=n*(n+1)/2;
    int currSum=0;
    for(int num: array)
    currSum+=num;

    cout<<"Missing nombre est "<<totSum-currSum;

    return 0;
}