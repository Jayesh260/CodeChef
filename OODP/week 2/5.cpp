#include <iostream>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    for(int i=s1.length()-1;i>-1;i--){
        cout<<s1[i];
    }
    return 0;
}
