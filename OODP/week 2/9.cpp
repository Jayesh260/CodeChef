#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cout<<"enter the 2d matrix rows and columns"<<endl;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=(i*j);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<""<<endl;
    }
    return 0;
}
