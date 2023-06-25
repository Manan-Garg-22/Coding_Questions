#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i+1; j++){ //Condition for 12345
            cout<<j;
        }
        for(j=1; j<2*i-1; j++){  //Condition for Stars
                cout<<"*";  
        }
        for(j=n-i+1; j>=1; j--){ //Condition for 54321
            cout<<j;      
        } 
        cout<<endl;
    }
    return 0;
}
