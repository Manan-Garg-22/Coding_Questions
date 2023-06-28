#include <iostream>
using namespace std;

int main()
{
    int n,i,sum;
    int first=0;
    int second=1;
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(i=1;i<=n-2; i++){
        sum=first+second;
        cout<<sum<<" ";
        first=second;
        second=sum;
    }
    return 0;
}
