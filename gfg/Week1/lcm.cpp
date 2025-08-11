#include<bits/stdc++.h>
using namespace std;
int lcm(int a ,int b){
    int maxres = max(a, b);
    int minres = min(a, b);
    for (int i = maxres; i <= a * b;i+=maxres){
        if(i%minres==0)
            return i;
    }
}
int gcd(int a,int b){
    return (b == 0) ? a : gcd(b, a % b);
}
//hcf*lcm==a*b
int lcmGcd(int a,int b){
    return (a / gcd(a, b)) * b;
}
int main(){
    int a = 10, b = 5;
    cout << lcm(a, b)<<endl;
    cout << lcmGcd(a, b);
    return 0;
}