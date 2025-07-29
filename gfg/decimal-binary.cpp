#include<bits/stdc++.h>
using namespace std;

//loop
string decToBinary(int n){
    string bin = "";
    while(n>0){
        int bit = n % 2;
        bin.push_back('0' + bit);
        n /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

//recursion
void decToBinRec(int n,string &bin){
    if(n==0)
        return;
    decToBinRec(n / 2, bin);
    bin.push_back(n % 2 + '0');
}
string decToBinaryRec(int n)
{
    if (n == 0)
        return "0";

    string bin = "";
    decToBinRec(n, bin);
    return bin;
}

//bitwise
string decToBinBit(int n){
    string bin = "";
    while(n>0){
        int bit = n & 1;
        bin.push_back('0' + bit);
        n=n >> 1;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

//built-in-fn
string decToBinFun(int n){
    int len = (int)(log2(n));
    return bitset<64>(n).to_string().substr(64 - len - 1);
}
int main(){
    int n = 12;
    cout << decToBinary(n)<<endl;
    cout << decToBinaryRec(n)<<endl;
    cout << decToBinBit(n)<<endl;
    cout << decToBinFun(n);
    return 0;
}