#include <bits/stdc++.h>

using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}


int cat(int n){
    int num = 0;
    num = factorial(2*n);
    int deno =  factorial(n+1) *factorial(n) ;
    
    int cats = num /deno;
    return cats;
}
int main(){
    int ans =0;
    ans = cat(5);
    cout<<ans<<endl;
    return 0;
}