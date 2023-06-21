#include <iostream>
using namespace std;

int main(){
    int i,j,k,n;
    cin>>n;
    for(i=n; i>=1; i--){
        for(j=0; j<n-i; j++){
            cout<<" "; 
        }
        if(i==1 || i==n){
            for(j=1; j<=i; j++){
                cout<<"*";}}
        else{
            for(j=1; j<=i; j++){
                if(j==1 || j==i)
                    cout<<"*";
                else 
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}