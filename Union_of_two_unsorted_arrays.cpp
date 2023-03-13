#include <iostream>
#include<unordered_set>
using namespace std;

int returnCount(int arr[],int arr2[], int n, int m){
    unordered_set<int>v;
    for(int i=0;i<n;i++){
        v.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        v.insert(arr2[i]);
    }
    int s=v.size();
    return s;
    
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
    
    cout<<returnCount(arr,arr2,n,m);

    return 0;
}
