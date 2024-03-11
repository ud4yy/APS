#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    cin>>n;
    int  prev2 = 0;
    int prevv =1;
    int curri=0;
    for( int i=2;i<=n;i++){
        curri = prev2+prevv;
        prev2 = prevv;
        prevv = curri;
    }
    cout<<prevv;
    return 0;
}