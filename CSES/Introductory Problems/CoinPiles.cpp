#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//https://cses.fi/problemset/task/1754
/*
If a or b is more then 2 times greater then a or b respectively, then it is not possible.
The two moves we can do is a-1 and b-2, or a-2 and b-1.
If we name both moves x and y, a=x+2y and b=2x+y.
Combine them and you get a+b=3x+3y, then a+b=3(x+y), then (a+b)/3=x+y.
That means that the coins can only be removed if the total amount of coins mod 3 is 0.
*/
int main()
{
    ll x, a, b;
    cin>>x;
    for(ll i=0; i<x; i++){
        cin>>a>>b;
        if(b>a){
            ll temp;
            temp=a;
            a=b;
            b=temp;
        }
        if(a>2*b||(a+b)%3!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}