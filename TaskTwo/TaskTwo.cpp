#include <iostream>

using namespace std;

int number_of_ways(int n, int k = 3)
{
    int count = 0;
    for (int i = 1; i < k + 1; i++)
    {
        for (int j = 1; j < k + 1; j++)
        {
            for (int h = 0; h < k + 1; h++)
            {
                if (i + j + h == n)
                {
                    count++;
                }
            }
        }
    }
    return count;
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
    
    int n = atoi(n_str), k = atoi(k_str);
    
    cout << number_of_ways(n, k);
}