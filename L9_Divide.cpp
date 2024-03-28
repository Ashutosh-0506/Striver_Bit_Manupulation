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
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == divisor)
        {
            return 1;
        }

        int sign = 1;
        if ((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor >= 0))
        {
            sign = -1;
        }

        long long n = abs((long long)dividend); // Cast to long long to handle INT_MIN
        long long d = abs((long long)divisor);  // Cast to long long to handle INT_MIN
        long long ans = 0;

        while (n >= d)
        {
            int count = 0;
            while (n >= (d << (count + 1)))
            {
                count++;
            }
            ans += (1LL << count); // Use 1LL to ensure the left shift does not overflow
            n -= (d << count);
        }

        if (ans > INT_MAX)
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        return ans * sign;
    }
};

int main()
{
    return 0;
}