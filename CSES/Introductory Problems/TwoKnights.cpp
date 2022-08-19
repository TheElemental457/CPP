#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//https://cses.fi/problemset/task/1072
/*
Total number of spaces that a knight can occupy:
k^2 because thats the amount of space on a board.
Second knight can occupy k^2-1.
So total spaces would be ((k^2)*(k^2-1))/2

The amount of spaces where the knight attacks:
In a 2*3 or 3*2 quare, there are 2 combinations that dont work.
There are k-1 2*3 boxes horizontally and k-1 verticly.
So (n-1)(n-2) 2*3 boxes.
Same logic applies for 3*2 boxes.
So 2(n-1)(n-2)
There are 2 invalid boxes per box, so 4(n-1)(n-2) spaces where the knight attacks
*/

int main()
{
    ll k;
    cin>>k;
    for(ll i=1; i<=k; i++){
    ll total=((i*i)*(i*i-1))/2;
    ll invalid=4*(i-1)*(i-2);
    cout<<total-invalid<<endl;
    }
    return 0;
}