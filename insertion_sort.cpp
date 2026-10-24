#include <iostream>


// basic implementation of insertion sort from Chapter 1

using namespace std;

int main()
{
    string s;
    int n;
    
    cin >> s;
    cin >> n;


    for (int i = 1; i < n; i++)
    {
        int j = i;

        while ((j > 0) && (s[j] < s[j-1]))
        {
            char tmp;
            tmp = s[j-1];
            s[j-1] = s[j];
            s[j] = tmp;

            j--;
        }
    }

    // print output
    cout << s << endl;
}