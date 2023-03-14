/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<unordered_set>
using namespace std;
bool sumSubarray(int arr[], int n, int sum){
    int total_sum=0;
    unordered_set<int>h;
    for(int i=0;i<n;i++){
        total_sum=total_sum+arr[i];
        if(h.find(total_sum-sum)!=h.end()){
            return true;
        }
        if(total_sum==sum){
            return true;
        }
        h.insert(total_sum);
        
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
    int sum;
    cin>>sum;
    if(sumSubarray(arr,n,sum)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
