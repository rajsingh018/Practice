#include <iostream>
#include<vector>
using namespace std;
void transpose(vector<vector<int>>v){
    int n=v[0].size();
    int m=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>v;
    for(int i=0;i<m;i++){
        vector<int>p;
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            p.push_back(k);
        }
        v.push_back(p);
    }
    transpose(v);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<v[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
