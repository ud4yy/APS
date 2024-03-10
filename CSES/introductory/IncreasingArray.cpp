#include <bits/stdc++.h>

using namespace std;

int main(){
    int n =0;
    cin>>n;

    vector<long long> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long cnt =0;
    for(int i=1;i<n;i++){
        while(arr[i-1]>arr[i]) {
            arr[i]++;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}