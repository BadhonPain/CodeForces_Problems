#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int coeff = 1;
        vector<int> nums;
        while (n)
        {
            if (n % 10)
                nums.push_back((n % 10) * coeff);
            n /= 10;
            coeff *= 10;
        }
        cout << nums.size() << endl;
        for (auto x : nums)
            cout << x << " ";
        cout << endl;
    }
}