#include<bits/stdc++.h>
using namespace std;
vector<int>printDivisors(int n){
    vector<int> divisors;
    for (int i = 1; i <= n;i++){
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    return divisors;
}
vector<int>SQprintDivisors(int n){
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n);i++){
        if(n%i==0){
            if(n/i==i)
                divisors.push_back(i);
            else{
                divisors.push_back(i);
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}
int main(){
    vector<int> divisors = printDivisors(10);
    vector<int> div = SQprintDivisors(10);
    for(auto &div:divisors){
        cout << div << " ";
    }
    cout << "\n";
    for(auto &div:div){
        cout << div << " ";
    }
}