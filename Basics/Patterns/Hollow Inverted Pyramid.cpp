#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i==0; i<n; i++){
        for(j=n; j>i; j--){
            if(i==0 || i==n)
              cout<<"*"; 
            else{
                if(j==i+1 || j==n)
                  cout<<"*";
                else
                  cout<<" ";
            }
        }
        cout<<endl;
    }
        
    return 0;
}
