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
int countfunc(int &n)
{
    int res = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((n & (1 << i)) != 0)
        {
            res++;
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << countfunc(n) << endl;

    int count = 0;
    while (n)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n /= 2;
    }
    cout << count << endl;
    return 0;
}