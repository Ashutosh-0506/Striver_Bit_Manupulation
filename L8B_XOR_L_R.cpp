//***********************************ASHUTOSH KUMAR***********************************//
/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥

Karmanye vadhikaraste Ma Phaleshu Kadachana,
Ma Karmaphalaheturbhurma Te Sangostvakarmani,

The meaning of the verse is :—
You have the right to work only but never to its fruits.
Let not the fruits of action be your motive, nor let your attachment be to
inaction
*/
#include <bits/stdc++.h>
using namespace ::std;
class Solution
{
private:
    int XOR_Range(int n)
    {
        if (n % 4 == 0)
        {
            return n;
        }
        if (n % 4 == 1)
        {
            return 1;
        }
        if (n % 4 == 2)
        {
            return n + 1;
        }
        if (n % 4 == 3)
        {
            return 0;
        }
        return 0;
    }

public:
    int findXOR(int l, int r)
    {
        int a = XOR_Range(l - 1);
        int b = XOR_Range(r);
        return a ^ b;
    }
};
int main()
{
    return 0;
}