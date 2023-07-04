#include<iostream>
using namespace std;

int main(){

    int base,exp, i, result =1;
    cout<<"enter base and exponent :"<<endl;
    cin>>base>>exp;

    for( i;i< exp;i++){
        result = result*base;
    }
    cout<<base<<"^"<<exp<<"="<<result<<endl;

    
    return 0;
}