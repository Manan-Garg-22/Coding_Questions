#include <iostream>
using namespace std;

int fact(int k){
   if(k<=1) return 1;
   else return k*fact(k-1);
}

void column(int n, int l){
    if(l==-1) return;
    cout<<fact(n)/(fact(n-l)*fact(l))<<" ";
    column(n,l-1);
}

void row(int n, int i){
    if(n==0) return;
    column(n,i);
    cout<<endl;
    row(n-1, i-1);
}

int main()
{
    int i,n;
    cin>>n;
    row(n,n);
    cout<<1;
    return 0;
}
