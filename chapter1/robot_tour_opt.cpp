/*
Problem: Robot Tour Optimization
Input: A set S of n points in the plane.
Output: What is the shortest cycle tour that visits each point in the set S?
*/

// NOTE : This implementation is incomplete and incorrect.

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n;
    vector<int> s;
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        s.push_back(tmp);
    }

    // s = [2,5,3,10,22,16]

    vector<int> visited;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int shortestd = 10000;
        
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] - s[i] < shortestd && )
            {
                shortestd = s[j] - s[i];
            }
        }

        total += shortestd;

        visited.push_back(i);
    }
}