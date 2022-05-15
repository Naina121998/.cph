#include <bits/stdc++.h>
using namespace std;
 
// Function to find 4 elements that add up to
// given sum
void fourSum(int X, int arr[], map<int,
             pair<int, int>> Map, int N)
{
    int temp[N];
 
    // Iterate from 0 to temp.length
    for (int i = 0; i < N; i++)
        temp[i] = 0;
 
    // Iterate from 0 to arr.length
    for (int i = 0; i < N - 1; i++)
    {
 
        // Iterate from i + 1 to arr.length
        for (int j = i + 1; j < N; j++)
        {
 
            // Store curr_sum = arr[i] + arr[j]
            int curr_sum = arr[i] + arr[j];
 
            // Check if X - curr_sum if present
            // in map
            if (Map.find(X - curr_sum) != Map.end())
            {
 
                // Store pair having map value
                // X - curr_sum
                pair<int, int> p = Map[X - curr_sum];
 
                if (p.first != i && p.second != i
                    && p.first != j && p.second != j
                    && temp[p.first] == 0
                    && temp[p.second] == 0 && temp[i] == 0
                    && temp[j] == 0)
                {
 
                    // Print the output
                    cout << arr[i] << "," << arr[j] <<
                      "," << arr[p.first] << "," << arr[p.second];
                    temp[p.second] = 1;
                    temp[i] = 1;
                    temp[j] = 1;
                   
                }
            }
        }
    }
}
 
// Program for two Sum
map<int, pair<int, int>> twoSum(int nums[], int N)
{
    map<int, pair<int, int>> Map;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            Map[nums[i] + nums[j]].first = i;
            Map[nums[i] + nums[j]].second = j;
        }
    }
    return Map;
}
 
// Driver code
int main()
{
     int arr[] = { 10, 25,25,35,6, 30, 40, 1, 2 ,68};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 91;
    map<int, pair<int, int>> Map = twoSum(arr, n);
     
    // Function call
    fourSum(X, arr, Map, n);
 
    return 0;
}
 