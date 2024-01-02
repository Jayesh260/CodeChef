#include<bits/stdc++.h>
using namespace std;
bool checkIndices(vector<int>& A) {
    int N = A.size();
    if(N==4){
        if((A[0]+A[1])!=(A[2]+A[3])) return true;
        else
        return false;
    }
    set <int> st;
    for(int i=0;i<N;i++){
        st.insert(A[i]);
    }
    if(st.size()==1)
    return false;
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    if (checkIndices(A)) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No" <<endl;
    }
}
    return 0;
}
