#include<bits/stdc++.h>
using namespace std;
//Im using bits/stdc++.h now
//https://cses.fi/problemset/task/1070
typedef long long ll;

int main()
{
    ll n, x=2;
    cin>>n;
    if(n==2||n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    while(x<=n){
        cout<<x<<" ";
        x+=2;
    }
    x=1;
    while(x<=n){
        cout<<x<<" ";
        x+=2;
    }
}
