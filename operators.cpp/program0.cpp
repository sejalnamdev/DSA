//write a program to print the value if it is even and divisible by 3 

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>"enter the value : ">>num;

    if((num%2==0) && (num%3==0)){
        cout<<"yes the above value is even and divisible by 3."<<endl;
    }else{
        cout<<"no the value is not the even and not divisible by 3."<<endl;
    }
    return 0;
}