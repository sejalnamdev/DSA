#include<iostream>
#include<vector>
using namespace std;

int main(){

    int array[]={1,2,3,4,3,2,1};

    int size=7;

    for(int i=0;i<size;i++){
        for(int j=i+1;i<size;j++){
            
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }

    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout<<array[i]<<endl;
        }
    }
    return 0;
}