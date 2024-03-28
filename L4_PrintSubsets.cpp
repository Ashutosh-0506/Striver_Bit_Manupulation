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
vector<vector<int>> subset(vector<int>&v)
{
    int n=v.size();
    vector<vector<int>>ans;
    int size=1<<n;
    for(int nums=0;nums<size;nums++)
    {
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            if((nums&(1<<i))!=0)
            {
                temp.push_back(v[i]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)
    {
        cin>>it;
    }
    vector<vector<int>>ans=subset(v);
    for(auto it:ans)
    {
        for(auto tt:it)
        {
            cout<<tt<<" ";
        }
        cout<<endl;
    }
    return 0;
}