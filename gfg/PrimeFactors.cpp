#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
vector<int>getPrimeFact(int n){
    vector<int> div;
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i==0){
            if (checkPrime(i))
                div.push_back(i);
            if (i != n / i && checkPrime(n / i))
                div.push_back(n / i);
        }
    }
    if (checkPrime(n))
        div.push_back(n);
    return div;
}

int main(){
    int n = 36;
    vector<int> primes = getPrimeFact(n);
    cout << "Prime factors of " << n << " are: ";
    for (int x : primes)
        cout << x << " ";
    return 0;
}
