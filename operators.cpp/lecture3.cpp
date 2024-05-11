//#include <iostream>
//using namespace std;

//int main(){
   // int a=3;
   // a=5;
   // cout<<a;
    //return 0;
//}




//swaping the values A and B

#include <iostream>
using namespace std;

int main(){
    int A,B;
    cout<<"A:";
    cin>>A;
    cout<<"B:";
    cin>>B;

    int C;
    C=B;
    B=A;
    A=C;
    cout<<"A:"<<A<<endl;
    cout<<"B:"<<B;
    return 0;
}