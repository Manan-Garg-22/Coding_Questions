#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
            if(i==1 || i==n){
                for(int j=1; j<=i; j++)
                {cout<<"*";}
            }
            else{
                for(int j=1; j<=i; j++)
                {if(j==1 || j==i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }}
            }
            cout<<endl;
        i++;
        }
        
    return 0;
}