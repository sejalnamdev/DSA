#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"enter x:";
    int x;
    cin>>x;

    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"element greater than the given value:"<<count;

    return 0;
}