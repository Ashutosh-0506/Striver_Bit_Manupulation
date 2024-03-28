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
#include<bits/stdc++.h>
using namespace ::std;
 int RemoveLastSetBit(int n)
 {
    for(int i=0;i<32;i++)
    {
        if((n&(1<<i))!=0)
        {
            n=(n&(~(1<<i)));
            return n;
        }
    }
    return n;
 }
int main()
{
    int n;
    cin>>n;
    n=RemoveLastSetBit(n);
    cout<<n<<endl;
return 0;
}