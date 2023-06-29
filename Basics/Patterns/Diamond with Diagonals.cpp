#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){            //Upper Part till n
        for(j=n; j>i; j--){
            cout<<" ";
        }
        for(j=1; j<=2*i-1; j++){
            if(j==i || j==1 || j==2*i-1 || i==n) cout<<"*";     //extra condition i==n for nth row 
            else cout<<" ";
        }
        cout<<endl;
    }
    
    for(i=n-1; i>=1; i--){         //Lower Part from n-1 
        for(j=n; j>i; j--){
            cout<<" ";
        }
        for(j=1; j<=2*i-1; j++){
            if(j==i || j==1 || j==2*i-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
