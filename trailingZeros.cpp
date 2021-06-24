#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=100;
    int count5=0;
    int count2=0;
    for(int i=1;i<=n;i++)
    {
        int num=i;
        if(num%5==0)
        {
             if(num%5==0)
            {
                while(num%5==0)
                {
                    count5++;
                    num=num/5;
                }
            }
        }
    }
    cout<< count5;
    return 0;
}