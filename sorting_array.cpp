#include<iostream>
using namespace std;

int main(){
    int arr1[]={0,1,3,4,9};
    int arr2[]={0,3,6,10,19};
    int m=5;
    int n=5;
    
    int result[m+n];
    int i=0;
    int j=0;
    int k=0;

    while(i<m and j<n){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            k++;
            i++;
        }else{
            result[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m){              //if arr2 is exausted
        result[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n){              //if arr1 is exausted
        result[k]=arr2[j];
        k++;
        j++;
    }

    for(int i=0;i<(m+n);i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
    }