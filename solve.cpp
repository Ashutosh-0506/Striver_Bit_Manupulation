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
void solve(vector<int> &v)
{
    int n = v.size();
    int size = (1 << n);
    for (int num = 0; num < size; num++)
    {
        for (int i = 0; i < n; i++)
        {
            if ((num & (1 << i)) != 0)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    solve(v);
    return 0;
}