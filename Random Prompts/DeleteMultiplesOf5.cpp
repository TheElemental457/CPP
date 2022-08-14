#include <iostream>
using namespace std;

int main()
{
    int size;
    int counter=0;
    int counter2=0;
    int temp;
    cout<<"What is the size of the array?"<<endl;
    cin>>size;
    if(size<=0){
        cout<<"Not a valid size"<<endl;
        return 0;
    }
    int array[size];
    cout<<"Enter elements into the array"<<endl;
    for(int z=0;z<size;z++){
        cin>>array[z];
    }
    for(int i=0; i<size; i++){
        if(array[i]%5==0){
            counter++;
            for(int x=(i+1); x<size; x++){
                if(array[x]%5==0){
                    
                }
                array[i]=array[x];

            }
        }
    }
    cout<<"The new list is:"<<endl;
    for(int y=0; y<(size-counter); y++){
        cout<<array[y]<<endl;
    }

    return 0;
}

