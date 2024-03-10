#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =0;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     //sumA,sumB;
    long long ans = LONG_LONG_MAX;
    for(int mask = 0;mask<pow(2,n);mask++){
       long long  sumA = 0;
       long long sumB =0;
        sumB=0;
        for(int pos = 0;pos<n;pos++){
            if(mask&(1<<pos)){
                sumA+= arr[pos];
            }
            else{
                sumB+= arr[pos];
            }
            ans = min(ans,abs(sumA-sumB));
        }

    }
    cout<<ans;

    return 0;
}