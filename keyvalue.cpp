#include<iostream>
using namespace std;

int main(){

    int array[]={3,9,11,15,17};
    int size=sizeof(array)/sizeof(array[0]);
    int key=11;

    int ans=-1;  //if not update...then output is (-1)

    for(int i=0;i<size;i++){
        if(array[i]==key){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}