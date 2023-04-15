#include <iostream>
#include<vector>
using namespace std;

void printSnake(vector<vector<int>>&arr, int m, int n){
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>arr;
    
    for(int i=0;i<m;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            v.push_back(k);
        }
        arr.push_back(v);
    }
    printSnake(arr,m,n);
    
    

    return 0;
}
