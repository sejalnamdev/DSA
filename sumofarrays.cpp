#include<iostream>
using namespace std;

int main(){

    int array[]={7,8,9,45,12,31};
    int  size=sizeof(array)/sizeof(array[0]);

    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];   //sum of arrays
    }

    cout<<sum<<endl;
    return 0;
}