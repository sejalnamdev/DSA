#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4};
    int size= sizeof (array)/ sizeof (array[0]);


    int index=0;  
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }
    return 0;
    
}