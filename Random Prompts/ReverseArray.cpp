#include <iostream>
using namespace std;

void solve(int *array, int size){
    int temp;
    for(int i=0;i<(size/2);i++){
        temp=array[i];
        array[i]=array[size-i-1];
        array[size-i-1]=temp;
    }

}
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0; i<=(size-1); i++){
        cin>>array[i];
    }
    solve(array, size);
    cout<<"The reversed code is:"<<endl;
    for(int i=0; i<=(size-1); i++){
        cout<<array[i]<<"\t";
    }
    return 0;
}
