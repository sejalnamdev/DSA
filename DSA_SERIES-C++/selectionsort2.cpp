#include <iostream>
using namespace std;

int main(){
    
    int arr[6]={2,1,3,7,4,5};

    for(int i=5;i>0;i--){

        int index=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}