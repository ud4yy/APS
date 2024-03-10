#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    cout<<"Enter n"<<endl;
    cin>>n;

    
    int totalsum = n * (n+1)/2;
    int sum=0;
    int x=0;
    for(int i =0;i<n-1;i++){
        cin>>x;
        sum=sum+x;
    }

    cout<<totalsum-sum<<endl;

    return 0;
}