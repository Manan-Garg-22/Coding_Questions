#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=n; i>=1; i--){
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(j=2*i; j>=1; j--){
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
