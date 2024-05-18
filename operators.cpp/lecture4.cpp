#include <iostream>
using namespace std;

int main(){
    int num1=7;  //111
    
    cout<<(num1<<1)<<endl;   //14
    cout<<(num1>>1)<<endl;   //3

    int num2=8;   //1000

    cout<<(num1|num2)<<endl;   //1111=15
    cout<<(num1&num2)<<endl;   //0000

    return 0;
}