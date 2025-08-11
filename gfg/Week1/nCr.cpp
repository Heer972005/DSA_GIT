#include<bits/stdc++.h>
using namespace std;
int nCr(int n,int r){
    if(r>n)
        return 0;
    if(r==0||r==n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
int fact(int n){
    int res = 1;
    for (int i = 2; i <= n;i++){
        res *= i;
    }
    return res;
}
int factNcR(int n,int r){
    if(r>n)
        return 0;
    return fact(n) / (fact(r) * fact(n - r));
}

double Multiplier(int s,int e){
    if(s==e)
        return s;
    double res = 1;
    while(s<=e){
        res *= s;
        s++;
    }
    return res;
}
int MulNcR(int n,int r){
    if(r>n)
        return 0;
    if(n==r||r==0)
        return 1;
    int mx_vl = max(r, n - r);
    int mn_vl = min(r, n - r);
    double nume = Multiplier(mx_vl + 1, n);
    double deno = Multiplier(1, mn_vl);
    return int(nume / deno);
}

int BinNcR(int n,int r){
    double sum = 1;
    for (int i = 1; i <= r;i++)
        sum = sum * (n - r + i) / i;
    return (int)sum;
}

int logNcR(int n,int r){
    if(r>n)
        return 0;
    if(r==0||r==n)
        return 1;
    double res = 0;
    for (int i = 0; i < r;i++){
        res += log(n - i) - log(i + 1);
    }
    return (int)round(exp(res));
}
int main(){
    cout << nCr(5, 2)<<endl;
    cout << factNcR(5, 2)<<endl;
    cout << MulNcR(5, 2)<<endl;
    cout << BinNcR(5, 2)<<endl;
    cout << logNcR(5, 2);
    return 0;
}