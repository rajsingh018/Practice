#include <iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>&v){
    for(int i=v[0].size()-1;i>=0;i--){
        for(int j=0;j<v.size();j++){
            cout<<v[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,m;
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
    rotate(v);
    return 0;
}
