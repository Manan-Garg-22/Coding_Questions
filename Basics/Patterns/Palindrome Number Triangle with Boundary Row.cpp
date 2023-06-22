#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            cout<<" ";
        }
        for(j=i; j<2*i; j++){  //Change here
                cout<<j; 
        }
        for(j=2*(i-1); j>=i; j--){ //Change here
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}