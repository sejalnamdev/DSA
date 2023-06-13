#include<iostream>
using namespace std;

int main(){
    
    int age;
    cin>>age;
    
    if(age<12){
        cout<<"child";
    }else if(12<=age && age<=18){
        cout<<"teenager";
    }else{
        cout<<"adult";
    }
    return 0;
}

