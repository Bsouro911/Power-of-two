// To check if a number is power of two or not.

// Approach 1: x = 2^n if number of set bit in x is 1.

#include <iostream>
#include <bitset>
using namespace std;

// Finding no. of set bits by using Brian Kernighan’s algorithm.
int countSetBits(int n)
{
    // count stores the total bits set in n
    int count = 0;

    while (n)
    {
        n = n & (n - 1); // clear the least significant bit set
        count++;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int x = countSetBits(n);

    if (x > 1)
    {
        cout << "The number is not a power of 2.";
    }
    else
    {
        cout << "The number is a power of 2.";
    }

    return 0;
}

// Time complexity : O(k), k = no. of set bits.