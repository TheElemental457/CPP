#include<iostream>
#include<algorithm>
using namespace std;
//https://cses.fi/problemset/task/1083
int main()
{
    long long n;
    cin>>n; 
    long long list[n-1];
    for(int i=0; i<(n-1); i++){
        cin>>list[i];
    }
    sort(list, list+(n-1));
    long long total=((n)*(n+1))/2;
    for(int y=0; y<(n-1); y++){
        total=total-list[y];
    }
    cout<<total<<endl;
}