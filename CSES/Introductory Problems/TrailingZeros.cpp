#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
For example 5! is 120.
5! is 5*4*3*2*1.
You can rewrite this as 4*3(5*2), or 12*10.
Whenever we multiply a number by 10, it adds a zero.
So, we have to count how many pairs of 5 and 2 there are, but we dont need to count the 2s because
there are more pairs of 2 then 5, since there are even numbers.
*/
 
int main()
{
    ll n, sum=0;
    cin>>n;
    while(n>0){
        sum+=(n/5);
        n=n/5;
    }
    cout<<sum;
    return 0;
}