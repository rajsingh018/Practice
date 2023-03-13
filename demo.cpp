/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<unordered_set>
using namespace std;

bool isPair(int arr[],int n, int sum){
    unordered_set<int>v;
    
    for(int i=0;i<n;i++){
        if(v.find(sum-arr[i])!=v.end()){
            return true;
        }
        else{
            v.insert(arr[i]);
        }
    }
    return false;
}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isPair(arr,n,sum)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;

    return 0;
}
