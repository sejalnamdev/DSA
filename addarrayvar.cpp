#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,-3,0,4,6,8,7,10};
    int x=14;
    int n=8;

    int i=0;
    int j=n-1;
    bool found=false;
    while(i<j){
        if(arr[i]+ arr[j]==x){
            found=true;
            break;
        }else{
            if(arr[i]+arr[j]<x){
                i++;
            }else{
                j--;
            }
        }
    }
    if(found=true){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    return 0;
}