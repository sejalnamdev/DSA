#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout<<"size of array: ";
    cin>>n;
    cout<<"elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}