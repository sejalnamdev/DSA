#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
        int start=0; 
        int end=n-1;
        int mid;
        
        while(start<=end){
            //mid find karo
            mid=(start+end)/2;
            //arr[mid]==key
            if(arr[mid]==key){
                return mid;
            }
            //arr[mid]<key
            else if(arr[mid]<key){
                start=mid+1;
            }
            //arr[mid]>key
            else{
                end=mid-1;
            }
        }
        return -1;

    }

int main(){
    
    int arr[1000];
    int n;
    int key;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search for: ";
    cin>>key;

    int result = BinarySearch(arr,n,key);
    if (result !=-1){
        cout<<"Element found at index: "<<result<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    
    return 0;
}