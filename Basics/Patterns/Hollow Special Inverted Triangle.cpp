#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=n; i>=1; i--){
        for(j=i; j>=1; j--){
            cout<<" ";
        }
        for(j=2*i-1; j>=1; j--){
            if(j==2*i-1 || j==1 || i==n)
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}