#include <bits/stdc++.h>
using namespace std;

vector<long long> factorization()
{
    vector<long long> sieve(1e7 + 1, 0);

    sieve[0] = 0, sieve[1] = 1;
    for (int i = 2; i < sieve.size(); i++)
        if (!sieve[i])
            for (int j = i; j < sieve.size(); j += i)
                sieve[j] = i;

    return sieve;
}

vector<bool> gen_prime()
{
    vector<bool> sieve(1e7 + 1, 0);

    sieve[0] = sieve[1] = 1;
    for (int i = 2; i < sieve.size(); i++)
        if (!sieve[i])
            for (int j = i + i; j < sieve.size(); j += i)
                sieve[j] = true;

    for (int i = 0; i < sieve.size(); i++)
        sieve[i] = !sieve[i];

    return sieve;
}
