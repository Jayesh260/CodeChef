//attempt 1
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
//         int x, y, temp;
//         for(x=0;x<n-1;x++){
//         for(y=0;y<n-x-1;y++){    
//             if(arr[y]>arr[y+1]){
//                 temp=arr[y];
//                 arr[y]=arr[y+1];
//                 arr[y+1]=temp;
//             }
//         }
//         }
//         cout<<arr[n]<<endl;
//     }
// 	return 0;
// }
// attempt 2
// #include<bits/stdc++.h>
// using namespace std;    
// int main()    
// {    
//     int t;
// 	cin>>t;
// 	while(t--){
//     int n,k,i,j,temp;
//     cin>>n;     
//     int a[n];
//     for(k=0;k<n;k++){
//         cin>>a[k];
//     }
//     for (int i = 1; i < n; ++i) {
//   if (a[0] < a[i]) {
//     a[0] = a[i];
//   }
// }
//     cout<<a[0]<<endl;    
//     }
//     return 0;
// }
//attempt 3
// #include<bits/stdc++.h>
// int main(){
//     int t;
//     std::cin>>t;
// // for taking the test cases
//     while(t--){
//         int n,max=0;
//         std::cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             std::cin>>arr[i];
//         }
// //for finding the freq
//         int freq[n];  
//         int visited=-1;  
//         for(int i=0;i<n;i++){  
//             int count=1;  
//             for(int j=i+1;j<n;j++){  
//                 if(arr[i]==arr[j]){  
//                     count++;
//                     }  
//                     }  
//                     if(freq[i]!=visited)  
//                     freq[i]=count;  
//     }  
// //for finding the ans=height of ith tower+(freq-1) and finding the max of the ans and the max height of tower  
//     for(int i=0;i<n;i++){
//         int h;
//         h=arr[i]+(freq[i]-1);
//         max=std::max(h,arr[i]);
//     }
// //output the max shit
//     std::cout<<max<<std::endl;
//     }
//     return 0;
// }
//attempt 4
#include<bits/stdc++.h>
using namespace std;
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--){
        int noofterms,max=0,count=0;
        cin>>noofterms;
        int arr[noofterms];
        //taking input of the heights of buildings
        for(int i=0;i<noofterms;i++){
            cin>>arr[i];
        }
        sort(arr,arr+noofterms,greater<int>());
        if(noofterms==1){
            max=arr[noofterms-1];
        }
        else{
            for(int i=0;i<noofterms-1;i++){
                if(arr[i]==arr[i+1]){
                    count++;
                }
                else if(max<arr[i]+count){
                    max=arr[i]+count;
                    count=0;
                }
            }
        }
        cout<<max<<'\n';
    }
}