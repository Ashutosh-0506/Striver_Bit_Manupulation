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

int main()
{
    string st;
    cin>>st;
    int ans=0;
    int power=0;
    for(int i=st.size()-1;i>=0;i--)
    {
        int val=pow(2,power++);
        ans+=((st[i]-'0')*val);
    }
    cout<<ans<<endl;
    return 0;
}