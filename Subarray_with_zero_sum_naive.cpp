/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool zeroSubarray(int arr[], int n){
    int k;
    for(int i=0;i<n;i++){
        k=arr[i];
        if(k==0){
            return true;
        }
        for(int j=i+1;j<n;j++){
            k=k+arr[j];
            if(k==0){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(zeroSubarray(arr,n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
