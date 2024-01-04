#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int arr[2*n],secarr[2*n];
	    for(int i=0;i<(2*n);i++){
	        cin>>arr[i];
            secarr[i]=arr[i];
	    }
        sort(secarr,secarr+(2*n));
        long long int target=secarr[n-1],place=n,sol=0;
        for(int itera=0;itera<place;itera++){
            if(arr[itera]>target){
                sol=(sol+place)-itera;
                place++;
            }
        }
        cout<<sol<<endl;
	}
	return 0;
}
