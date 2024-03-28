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
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (auto &it : nums)
        {
            mp[it]++;
        }
        for (auto it : mp)
        {
            if (it.second == 1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}