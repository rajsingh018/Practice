/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<unordered_set>
using namespace std;
bool zeroSum(int arr[], int n){
    int sum=0;
    unordered_set<int>h;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(h.find(sum)!=h.end()){
            return true;
        }
        else{
            h.insert(sum);
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
    
    if(zeroSum(arr,n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
