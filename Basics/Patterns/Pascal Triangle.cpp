#include <iostream>
using namespace std;

int fact(int n){
    if(n<=1) return 1;
    else return n*fact(n-1);
}
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0; i<=n; i++){
        for(j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}
