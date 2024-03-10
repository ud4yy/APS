#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void convBinary(vector<int> arr, int n){
    string s="";
    for(auto it: arr){
        while(it){
            if(it%2==0)
            {
                s=s+"0";
            }
            else{
                s=s+"1";
            }
            it = it /2;
        }
        reverse(s.begin(),s.end());
        while(s.size() <n){
            s="0"+s;
        }
        cout<<s<<endl;
        s = "";
    }
    
}

vector<int> graycode(int n){
    int m = pow(2,n);
    vector<int> ls;
    ls.emplace_back(0);
    if(n==0)    return ls;
    int exp=0;
    for(int i=1; i<=n;i++){
        exp=pow(2,i-1);
        for(int j =ls.size()-1;j>=0;j--){
            ls.emplace_back(ls[j]+exp);
        }
    }  
    return ls;
}

int main(){
    int n =0;
    cin>>n;
    vector<int> arr;
    arr = graycode(n);
    convBinary(arr,n);
    return 0;
}