#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={4,5,2,3,1};
    int x=4;
    int size=5;
    

    int pairs=0;
    for(int i=0;i<=size;i++){
        for(int j=i+1;j<=size;i++){
            if(arr[i]+arr[j]==x){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;
    return 0;
}