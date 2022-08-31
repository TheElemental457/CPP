#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//https://cses.fi/problemset/submit/1755/
/*
*/
 
int main()
{
    ll temp2, temp=0, counter=0;
    string s;
    cin>>s;
    vector<char> x={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    vector<ll> y(26);
    vector<ll> z(26);
    for(ll i=0; i<26; i++){
        y[i]=0;
    }
    for(ll i=0; i<s.size(); i++){
        for(ll j=0; j<x.size(); j++){
        if(s[i]==x[j]){
            y[j]++;
        }
        }
    }
    for(int i=0; i<y.size(); i++){
        if(y[i]%2==1){
            counter++;
        }
        if(counter>1){
            cout<<"NO SOLUTION";
            return 0;
        }
    }
    for(ll i=0; i<y.size(); i++){
        if(y[i]%2==0&&y[i]>0){
            z[i]=y[i]/2;
            for(ll I=0; I<z[i]; I++){
                cout<<x[i];
            }
        }
        else if(y[i]%2==1){
            temp=y[i];
            z[i]=0;
            temp2=i;
        }
        else{
            z[i]=0;
        }
    }
    if(temp!=0){
    for(ll i=0; i<temp; i++){
        cout<<x[temp2];
    }
    }
    for(ll i=z.size(); i>=0; i--){
        if(z[i]!=0){
            for(ll j=0; j<z[i]; j++){
                cout<<x[i];
            }
        }
    }
    return 0;
}
