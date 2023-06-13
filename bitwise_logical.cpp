#include<iostream>
using namespace std;

int main(){
    
    int value;
    cin>>value;
    if((value%2==0) && (value%3==0)){
        cout<<"value is even and divisible by 3"<<endl;
    }else{
        cout<<"value is not"<<endl;
    return 0;
    }
}