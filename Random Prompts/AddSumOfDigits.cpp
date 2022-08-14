#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the number you want me to add the digits of"<<endl;
    cin>>n;
    int count;
    int temp=n;
    while(temp>=1){
        temp=temp/10;
        count++;
    }
    int y;
    int total=0;
    for(int i=0; i<count; i++){
        y=n%10;
        n=n/10;
        total=total+y;
    }
    cout<<"The sum of the digits is ..."<<endl<<total;
    return 0;
}