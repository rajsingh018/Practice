#include <iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>>&arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
    print(arr);
    
    

    return 0;
}
