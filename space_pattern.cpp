#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=m;j++){
            if(j==1||j==m ||i==1||i==n){
                cout<<"j";
            }
            else {
                cout<<" ";
            }
        

        }
        cout<<endl;

    }
    return 0;
}