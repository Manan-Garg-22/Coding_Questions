#include <iostream>
using namespace std;

int Maximum(int arr[], int size){
    int max=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

int Minimum(int arr[], int size){
    int min=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]<min) min=arr[i];
    }
    return min;
}

int main()
{
    int size;
    cout<<"Enter no of elements you want: ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter elements in array: \n";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"\nMaximum element is: "<<Maximum(arr,size);
    cout<<"\nMinimum element is: "<<Minimum(arr,size);
    return 0;
}
