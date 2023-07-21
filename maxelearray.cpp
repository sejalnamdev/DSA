#include<iostream>
using namespace std;

int main(){

    int array[]={12,32,56,98,18,17};
    int size=sizeof(array)/sizeof(array[0]);

    int maxvalue=array[0];
    
    for(int i=0;i<size;i++){
        
        if(array[i] > maxvalue ){
            maxvalue=array[i];
        }

    }
    cout<<maxvalue<<endl;
    return 0;
}