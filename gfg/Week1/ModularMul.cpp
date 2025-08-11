#include<iostream>
using namespace std;
int modmul(int a,int b,int M){
    return ((a % M) * (b % M)) % M;
}
int main(){
    int a = 5, b = 3, M = 11;
    cout << modmul(a, b, M);
}
