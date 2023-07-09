#include<iostream>
using namespace std;

int add(int a, int b=1, int c=2){
    return(a+b+c);
}
int main(){

    cout<<add(1)<<endl;
    cout<<add(1,2)<<endl;
    cout<<add(1,2,5)<<endl;

    return 0;
}