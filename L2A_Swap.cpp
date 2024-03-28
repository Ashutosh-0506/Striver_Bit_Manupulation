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
 void swap(int &a,int &b)
 {
    a=a^b;
    b=a^b;
    a=a^b;
    return;
 }
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping: "<<endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swapping: "<<endl;
    cout<<a<<" "<<b<<endl;

return 0;
}