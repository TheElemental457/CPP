#include<iostream>
#include<string>
using namespace std;
//https://cses.fi/problemset/task/1069
int main()
{
    string DNA;
    cin>>DNA;
    char temp;
    temp=DNA[0];
    int x=1;
    int y=1;
    for(int i=1; i<DNA.size(); i++){
        if (DNA[i]==temp){
            x++;
        }
        else{
            y=max(x, y);
            x=1;
            temp=DNA[i];
        }
    }
    cout<<max(x, y)<<endl;
    return 0;
}