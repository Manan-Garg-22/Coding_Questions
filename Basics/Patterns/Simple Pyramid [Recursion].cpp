#include <iostream>
using namespace std;

void column(int l){
    if(l==0) return;
    cout<<"*";
    column(l-1);
}

void row(int n, int i){
    if(n==0) return;
    column(i);
    cout<<endl;
    row(n-1,i+1);
}
int main()
{
    int i,n;
    cin>>n;
    row(n,1);
    return 0;
}
