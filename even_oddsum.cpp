#include <iostream>
using namespace std;

int main(){
    int arr[]={2,4,5,7,9,6};
    int size=6;

    int evensum=0;
    int oddsum=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            evensum+=arr[i];
        }else{
            oddsum+=arr[i];
        }
    }
    cout<<"sum of even element:"<<evensum<<endl;
    cout<<"sum of odd element:"<<oddsum<<endl;
    return 0;
}