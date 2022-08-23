#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//https://cses.fi/problemset/task/1092
/*
Formula for sum of all digits from 1 to n is (n*(n+1))/2.
Since we are trying to find two groups, it is (n*(n+1))/4.
If this is not an integer, it cannot be split into two groups of equal value.
If sum % n is 0, that means you can add n, followed by 1, followed by n-1, followed by 1+1...
and so on until it equals the target sum.
If sum % n is not 0, it is the same case but you have to add n+1 until you reach the target sum.
Then, you just print the vector and what numbers from 1 to n there are that dont fall into the vector.
*/
int main()
{
    ll n, ans, sum=0, b=1;
    cin>>n;
    vector<ll> a;
    vector<ll> c;
    vector<ll> d;
    if((n*(n+1))%4!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    ans=n*(n+1)/4;
    if(ans%n==0){
        a.push_back(n);
        sum+=n;
    }
    while(ans!=sum){
        if(ans%n==0){
            a.push_back(n-b);
            a.push_back(b);
            sum+=n;
        }
        else{
            a.push_back(n-b+1);
            a.push_back(b);
            sum+=n+1;
        }
        b++;
    }
    sort(a.begin(), a.end());
    cout<<"YES"<<endl<<a.size()<<endl;
    for(ll i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    for(ll j=1; j<=n; j++){
        c.push_back(j);
    }
    sort(c.begin(), c.end());
    //Next two lines are from: https://stackoverflow.com/questions/27192967/c-get-the-difference-between-two-vectors
    set_difference(c.begin(), c.end(), a.begin(), a.end(),
        inserter(d, d.begin()));
    //^
    cout<<endl<<d.size()<<endl;
    for(ll h=0; h<d.size(); h++){
        cout<<d[h]<<" ";
    }
    return 0;
}


