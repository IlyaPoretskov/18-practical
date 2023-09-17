#include <iostream>

using namespace std;

void evendigits(long long n, int& ans)
{
    if (n != 0)
    {
        const int last_digit = n % 10;

        if (last_digit % 2 == 0) ans++;
        
        evendigits(n / 10, ans);
    }
}

bool isdigit(const char* n)
{
    for (int i = 0; n[i]; i++)
    {
        if (!(*(n + i) >= 48 && *(n + i) <= 57))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int ans = 0;

    long long n;

    cout << "Input long number: ";
    cin >> n;

    evendigits(n, ans);

    cout << "Result: " << ans << endl;
    system("pause");
}