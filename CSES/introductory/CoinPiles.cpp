#include <bits/stdc++.h>

using namespace std;

int main(){
    int t =0;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        if((x+y)%3 ==0 && max(x,y)<= 2 *min(x,y)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}