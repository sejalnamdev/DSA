#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4};
    cout<<sizeof (array)<<endl;
    cout<<sizeof (array) /sizeof( array[0])<<endl;


    int array2[5];
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    cout<<array[4]<<endl;


    return 0;
}