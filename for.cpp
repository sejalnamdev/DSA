#include<iostream>
using namespace std;

int main(){

    int i;
    cin>>i;

    for( ;i%5==0 && i%7==0; ){

        cout<<i<<endl;

        break;
    }
    
}