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
    int minBitFlips(int start, int goal)
    {
        int count = 0;
        for (int i = 0; i < 32; i++)
        {
            if (((start & 1) ^ (goal & 1)) == 1)
            {
                count++;
            }
            start = start >> 1;
            goal = goal >> 1;
        }
        return count;
    }
};
int main()
{
    return 0;
}