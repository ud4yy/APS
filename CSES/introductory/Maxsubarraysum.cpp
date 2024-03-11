#include <bits/stdc++.h>

using namespace std;

void maxsub(int n,int arr[]){
    int sum=0;
    int totalsum=INT_MIN;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        totalsum = max(sum,totalsum);

        if(sum<0) sum=0;
    }
    cout<<totalsum<<endl;
}

int main(){
    int n =0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxsub(n,arr);

    return 0;
}