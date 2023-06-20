#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){    //just change n with i to make filled square to simple pyramid
            cout<<"*"; 
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
