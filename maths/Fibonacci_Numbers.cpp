#include <map>
#include <iostream>
using namespace std;

#define long long long
const long M = 1000000007; // modulo
map<long, long> F;

long fibonacci(long n)
{
    if (F.count(n))
        return F[n];
    long k = n / 2;
    if (n % 2 == 0)
    { // n=2*k
        return F[n] = (fibonacci(k) * fibonacci(k) + fibonacci(k - 1) * fibonacci(k - 1)) % M;
    }
    else
    { // n=2*k+1
        return F[n] = (fibonacci(k) * fibonacci(k + 1) + fibonacci(k - 1) * fibonacci(k)) % M;
    }
}
int main()
{
    long n;
    F[0] = F[1] = 1;
    cin >> n;
    cout << (n == 0 ? 0 : fibonacci(n - 1)) << endl;
}