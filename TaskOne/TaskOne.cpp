#include <iostream>
#include <vector>

using namespace std;


void swapvec(vector<int>& a, int b[])
{
    int len = a.size();

    for (int i = 0; i < len; i++)
    {
        int tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}

int main() 
{
    vector<int> a = {1,2,3,4};

    int b[] = {2,4,6,8};

    swapvec(a,b);

    for(int i = 0; i < 4; ++i)

        std::cout << a[i];

    std::cout << std::endl;

    for(int i = 0; i < 4; ++i)

        std::cout << b[i];
}