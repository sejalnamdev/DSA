#include <iostream>
using namespace std;

int main(){
    int arr[6]={3,5,1,8,9,2};
    
    int ans=-1;
    
    for(int i=0;i<6;i++){
        if(arr[i]=ans){
            ans=arr[i];
        }
    }

    //second largest

    int second=-1;

    for(int i=0;i<6;i++){
        if(arr[i]!=ans){
            second= max(second,arr[i]);
        }
    }
    

    

    
    
    return second;
}