#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

float add(float num1,float num2,float num3){
    float sum=num1+num2+num3;
    return sum;
}
int main(){
    int a=5;
    int b=6;

    float c=2.8;
    float d=3.6;
    cout<<add(a,b,c)<<endl;
    return 0;
}