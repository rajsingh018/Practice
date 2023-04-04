#include <iostream>
#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum, given_sum, count;
    cin>>given_sum;
    int final_count=0;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==given_sum){
                count=j+1-i;
            }
        }
        sum=0;
        final_count=max(final_count,count);
    }
    
    cout<<final_count;
    return 0;
}
