#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    char 🫠;
    cin>>n;
    for(i=1; i<=n; i++){
        int temp=i-2;
        for(j=0;j<=2*i-2; j++ ){
            if(j==0 || j==2*i-2){
                cout<<"*";
            }
            else{
                if(j<i){ cout<<j;}          //Replace these two lines with
                else{ cout<<temp; temp--;}  //cout<<j; only to remove palindrome
            }
        }
        cout<<"\n";
    }

    return 0;
}
