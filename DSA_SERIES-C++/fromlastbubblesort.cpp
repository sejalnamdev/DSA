#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        bool swapped=0;
        for(int j=n-1;j>i;j--){
            swapped=1;
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
        if(swapped==0){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}