#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==0)
        return b;
    return gcd(b % a, a);
}
int etf(int n){
    int res = 1;
    for (int i = 2; i < n;i++)
        if(gcd(i,n)==1)
            res++;
    return res;
}

int FormuETF(int n){
    int res=n;
    for (int p = 2; p * p <= n;p++){
        if(n%p==0){
            while(n%p==0)
                n /= p;
            res = res - res / p;
        }
    }
    if(n>1)
        res = res - res / n;
    return res;
}
int main(){
    cout << etf(11)<<endl;
    cout << FormuETF(11) << endl;
    
    return 0;
}