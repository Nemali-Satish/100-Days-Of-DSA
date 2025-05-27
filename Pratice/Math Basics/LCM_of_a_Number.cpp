#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
    int greater = max(a, b);
    int smallest = min(a, b);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            return i;
    }
}

int main()
{
    int a , b ;

    cout << "Enter 1st Number : ";
    cin >> a;

    cout << "Enter 2nd Number : ";
    cin >> b;

    cout << "LCM of " << a << " and " << b << " is " << LCM(a, b);

    return 0;
}
