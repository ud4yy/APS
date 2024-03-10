#include <bits/stdc++.h>
using namespace std;



void LCS(string s1,string s2){
    int n = s1.size();
    int m = s2.size();

    int dp[n+1][m+1];
    dp[0][0] ={0};

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i]==s2[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j]=min(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    cout<<"The LCS is"<<endl;
    cout<<dp[n][m]<<endl;

}

int main(){
    string s1="abced";
    string s2 ="abecd";

    LCS(s1,s2);
}