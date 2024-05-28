#include <iostream>
using namespace std;

int main(){
    
    char alphabet;
    cin>>alphabet;

    switch(alphabet){
        case 'a':
            cout<<"vowel";
            break;
        case 'e':
            cout<<"vowel";
            break;
        case 'i':
            cout<<"vowel";
            break;
        case 'o':
            cout<<"vowel";
            break;
        case 'u':
            cout<<"vowel";
            break;

        default:
            cout<<"consonent";
            break;
    }
    return 0;
}