/**
 *    author:  isilent
 *    Q : ALTDIA      
**/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     using std::cout;
//     using std::cin;
//     std::ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int T;
//     cin>>T;
//     while(T--){
//         int B,W;
//         cin>>B>>W;
//         if((W==0 && B>1) || (B==0 && W>1)){
//             cout<<"-1\n";
//             continue;
//         }
//         if(B<W){
//             for(int i=0;i<B;i++){
//                 cout<<"B";
//             }
//             for(int i=0;i<W;i++){
//                 cout<<"W";
//             }
//         }else{
//             for(int i=0;i<W;i++){
//                 cout<<"W";
//             }
//             for(int i=0;i<B;i++){
//                 cout<<"B";
//             }
//         }
//         cout<<"\n";
//         int aa=1,bb=2;
//         for(int i=1;i<W+B;i++) {
//             cout<<aa<<" "<<bb++<<"\n";
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
  int test;
  cin >> test;
  while (test--) {
    int whi, bla;
    cin >> bla >> whi;
    if ((whi == 0 && bla > 1) || (bla == 0 && whi > 1)) {
      cout << "-1\n";
      continue;
    }

    if (bla < whi) {
      for (int i = 0; i < bla; i++) {
        cout << "B";
      }
      for (int i = 0; i < whi; i++) {
        cout << "W";
      }
    } else {
      for (int i = 0; i < whi; i++) {
        cout << "W";
      }
      for (int i = 0; i < bla; i++) {
        cout << "B";
      }
    }

    cout << "\n";
    int a = 1, c = 2;
    for (int i = 1; i < whi + bla; i++) {
      cout << a << " " << c++ << "\n";
    }
  }
  return 0;
}