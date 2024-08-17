#include <bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21
// Problem -  To Find the nth fibonacci number

int fibo(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}