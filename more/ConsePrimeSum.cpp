#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 1e5 + 1;
vector<bool> isPrime(LIMIT, true);
vector<int> primes;

void generatePrimes()
{
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
    for (int i = 2; i * i < LIMIT; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < LIMIT; j += i)
                isPrime[j] = false;
        }
    }
    // Store all primes in a vector
    for (int i = 2; i < LIMIT; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}

int main()
{
    generatePrimes(); // Fill isPrime[] and primes[]

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = 5; // initial sum
        int i = 2;   // start from the 3rd prime (primes[2] = 5)
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

    return 0;
}
