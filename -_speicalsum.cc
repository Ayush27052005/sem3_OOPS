#include<iostream>
using namespace std;
int spsum(int arr[], int j, int size){
    int sum = j;
    int k=1;
    for(int i = j;i<size;i++){
        if(sum+k>size) break;
        sum+=k;
        k++;
    }
    int adder = 0;
    for(int i=j;i<sum;i++) adder+=arr[i];
    return adder;
}  
int main(){
    int n,biggest=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        int sum = spsum(arr,i,n);
        if(sum>biggest) biggest=sum;
    }
    cout<<biggest<<endl;
    return 0;
}