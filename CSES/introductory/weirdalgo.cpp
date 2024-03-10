#include <bits/stdc++.h>

using namespace std;
int main(){
    int n =0;
    cout<<"enter N"<<endl;
    cin>>n;


    while(n!=1){
        if(n%2==0){
            n = n / 2;
        }
        else {
            n= (n*3) +1;
        }
        cout<<n<<" ";
    }

    return 0;
}