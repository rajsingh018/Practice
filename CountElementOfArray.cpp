#include <iostream>
#include<unordered_map>
using namespace std;

void doCount(int arr[],int n){
    unordered_map<int,int>v;
    for(int i=0;i<n;i++){
        v[arr[i]]++;
    }
    
    for(auto e:v){
        cout<<e.first<<" "<<e.second<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    doCount(arr,n);

    return 0;
}
