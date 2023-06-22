#include <iostream>
using namespace std;

int main(){
    int i,j,n,x;
    cin>>n;
    for(i=1; i<=n; i++){
        x=i;
        for(j=1; j<=i; j++){
                cout<<x<<" "; 
                x--;
        }
        cout<<endl;
    }
    return 0;
}