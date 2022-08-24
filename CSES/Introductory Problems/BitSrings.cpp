#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//https://cses.fi/problemset/task/1617/

/*
This one is pretty easy, all what you need to do is 2^n because there are two possiblities for the first digit,
then second, then third, etc..
Every time I multiply, I put the answer mod 10^9+7, as said in the question.
*/

ll power(ll x, ll y){
    ll a=x;
    for(ll i=1; i<y; i++){
        x=x*a;
        x=x%1000000007;
    }
    return x;
}
int main()
{
    ll n;
    cin>>n;
    ll a=power(2, n);
    cout<<a;
    return 0;
}