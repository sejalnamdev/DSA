#include <iostream>
using namespace std;

int main(){
    
    int arr[6]={10,6,4,9,5,2};
    for(int i=0;i<5;i++){

        int index=i;
        for(int j=i+1;j<6;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);

    }

    for(int i=0; i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}