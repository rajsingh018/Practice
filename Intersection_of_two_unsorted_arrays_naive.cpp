/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void printCommon(int arr[], int arr2[], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==arr2[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    
    int arr[n];
    int arr2[m];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    printCommon(arr,arr2,n,m);

    return 0;
}
