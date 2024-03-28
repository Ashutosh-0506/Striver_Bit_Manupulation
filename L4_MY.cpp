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
void subsets(vector<int> &v, vector<int> &temp, int index, int n)
{
    if (index == n)
    {
        if (temp.size() != 0)
        {
            for (auto it : temp)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    temp.push_back(v[index]);
    subsets(v, temp, index + 1, n);
    temp.pop_back();
    subsets(v, temp, index + 1, n);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> temp;
    int index = 0;
    subsets(v, temp, index, n);
    return 0;
}