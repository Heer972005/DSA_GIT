#include<bits/stdc++.h>
using namespace std;

vector<int>sieve(int n){
    vector<bool> prime(n + 1, true);
    for (int i = 2; i*i <= n;i++){
        if(prime[i]==true){
            for (int p = i * i; p <= n;p+=i)
                prime[p] = false;
        }
    }
    vector<int> res;
    for (int p = 2; p <= n;p++){
        if(prime[p]){
            res.push_back(p);
        }
    }
    return res;
}
int main(){
    int n = 35;
    vector<int> res = sieve(n);
    for(auto ele:res){
        cout << ele << ' ';
    }
}