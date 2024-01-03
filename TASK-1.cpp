//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        int max1, max2, temp;
        max1 = arr[0];
        max2 = arr[1];
        for (int i = 2; i < n; i++)
        {
            if (max2 > max1)
            {
                temp = max2;
                max2 = max1; //compare 1st and 2nd largest number 
                max1 = temp;
            }
            if (max2 < arr[i])     //Compare 2nd max number to other element to find the next maximum number; 
            {
                max2 = arr[i];
            }
        }
        return max2;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
