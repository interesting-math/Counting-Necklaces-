#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int gcd(a, b)
{
        if (b == 0) return a;
        else
        {
                return gcd(b, a % b);
        }
}

int main()
{
        int n = 18, k = 3;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
                sum += pow(k, gcd(i, n));
        }
        sum /= n;
        cout << sum << endl;
        
        getch();
        return 0;
}
