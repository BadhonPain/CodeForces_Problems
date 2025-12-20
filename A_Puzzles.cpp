#include <bits/stdc++.h>
using namespace std;
int main()
{
    int stuNum, n;
    cin >> stuNum >> n;
    int puzzle[n];
    for (int i = 0; i < n; i++)
    {
        cin >> puzzle[i];
    }
    sort(puzzle, puzzle + n);
    int left = n - 1 - (stuNum - 1), right = n - 1;
    int currentDiff = 0, minDiff = INT_MAX;
    while (left>=0)
    {
        currentDiff = puzzle[right] - puzzle[left];
        minDiff = min(minDiff, currentDiff);
        right--;
        left--;
        currentDiff = 0;
    }
    cout << minDiff << endl;
}