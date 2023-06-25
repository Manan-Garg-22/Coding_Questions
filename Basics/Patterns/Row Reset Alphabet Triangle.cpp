#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            cout<<" ";
        }
        for(j=1; j<=2*i-1; j++){  //Change here
                cout<<(char)(j+64);  //Just typecast
        }
        /*for(j=2*(i-1); j>=i; j--){ //Change here
            cout<<(char)(j+64);      //Just typecast
        } */
        cout<<endl;
    }
    return 0;
}
