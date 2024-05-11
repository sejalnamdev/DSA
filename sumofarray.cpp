#include<iostream>
using namespace std;

int main(){
    int arr[]={3,5,7,2};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int idx=0;idx<size;idx++){
        sum+=arr[idx];
        
    }
    cout<<"sum of given array is = "<<sum<<endl;
    return 0;
}