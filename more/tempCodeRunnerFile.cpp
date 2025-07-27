#include <bits/stdc++.h>

using namespace std;

const int LIMIT = 1e5 + 1;

vector<bool> isPrime(LIMIT, true);
vector<int> primes;

int main()
{
    for (int i = 2; i * i <= LIMIT; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j < LIMIT; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 5;
        int i = 2;
        int count = 0;
        while (sum <= n)
        {
            if (isPrime[sum])
            {
                count++;
            }
            sum += primes[i];
            i++;
        }
        cout << count << endl;
    }
}