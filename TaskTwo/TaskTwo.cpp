#include <iostream>

using namespace std;

int n, k;

int number_of_ways(int n, int i = 3)
{
    if (n == 0)
    {
        return 1;
    } else {
        if (n < 0 || i < 1)
        {
            return 0;
        } else {
            return number_of_ways(n - i, k) + number_of_ways(n, i - 1);
        }
    }  
}

bool isdigit(const char* n)
{
    for (int i = 0; n[i]; i++)
    {
        if ( !(n[i] >= 48 && n[i] <= 57) )
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char * n_str, * k_str;

    cout << "Input: ";
    cin >> n_str >> k_str;

    while (!isdigit(n_str) || !isdigit(k_str))
    {
        cerr << "!!Incorrect input, please, try again!!\n";
        cout << "Input: ";
        cin >> n_str >> k_str;
    }
    
    n = atoi(n_str), k = atoi(k_str);
    
    cout << number_of_ways(n, k);
}