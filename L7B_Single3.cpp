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
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int> &nums) {
        long long n = nums.size(); // Get the size of the input array

        long long xorr = 0; // Initialize XOR variable to store XOR of all elements
        for (long long i = 0; i < n; i++) {
            xorr = xorr ^ nums[i]; // Compute XOR of all elements in the array
        }

        // Find the rightmost set bit in the XOR result
        // This operation isolates the rightmost set bit and sets all other bits to 0
        long long rightmost = (xorr & (xorr - 1)) ^ xorr;

        // Initialize variables to store the two single numbers
        int bucket1 = 0;
        int bucket2 = 0;

        // Iterate through the array again
        for (long long i = 0; i < n; i++) {
            // Check if the rightmost bit of the current number is set
            if ((nums[i] & rightmost) != 0) {
                // If the rightmost bit is set, XOR it with bucket1
                bucket1 = bucket1 ^ nums[i];
            } else {
                // If the rightmost bit is not set, XOR it with bucket2
                bucket2 = bucket2 ^ nums[i];
            }
        }

        // Return the two single numbers in a vector
        return {bucket1, bucket2};
    }
};

int main()
{
    return 0;
}