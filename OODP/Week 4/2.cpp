#include <iostream>
using namespace std;
class Floyd{
    public:
    Floyd(int n){
        int k=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<k++<<"\t";
                }
                cout<<endl;
            }
        }
        ~Floyd(){
            cout<<"\nDestructor Executed";
            }
    };
int main(){
    Floyd t1(5);
}