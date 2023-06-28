#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=1; i<=n; i++){      //Top
        for(j=1; j<=i; j++){  //Condition for Stars
                cout<<"*";  
        }
        for(j=n-i; j>=1; j--){ //Condition for spaces
            cout<<" ";
        }
        for(j=n-i; j>=1; j--){ //Condition for spaces
            cout<<" ";
        }
        for(j=1; j<=i; j++){  //Condition for Stars
                cout<<"*";  
        }
        cout<<endl;
    }
    
    for(i=n-1; i>=1; i--){    //Bottom
        for(j=1; j<=i; j++){  //Condition for Stars
                cout<<"*";  
        }
        for(j=n-i; j>=1; j--){ //Condition for spaces
            cout<<" ";
        }
        for(j=n-i; j>=1; j--){ //Condition for spaces
            cout<<" ";
        }
        for(j=1; j<=i; j++){  //Condition for Stars
                cout<<"*";  
        }
        cout<<endl;
    }
    return 0;
}
