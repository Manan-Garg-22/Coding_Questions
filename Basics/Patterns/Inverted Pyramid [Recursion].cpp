#include <iostream>
using namespace std;

void column(int l){
    if(l==0) return;
    cout<<"*";
    column(l-1);
}

void row(int n){           //Change here, Use 1 parameter rather than 2
    if(n==0) return;
    column(n);             //Input changed from i to n
    cout<<endl;
    row(n-1);
}
int main()
{
    int i,n;
    cin>>n;
    row(n);                //1 parameter function 
    return 0;
}
