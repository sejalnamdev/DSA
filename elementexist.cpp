#include<iostream>
using namespace std;

int main(){
    int arr[]={3,5,9,10,14,6};
    int size=6;
    int i,key,ans=-1;
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            ans=i;
        }
    }cout<<ans<<endl;

    return 0;
}