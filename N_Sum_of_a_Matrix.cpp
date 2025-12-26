#include <bits/stdc++.h>
using namespace std;
void matrixSum(int row, int collum, int r, int c, const vector<vector<int>> &A, const vector<vector<int>> &B)
{
    if (row == r)
        return;
    cout << A[row][collum] + B[row][collum] << " ";
    if (collum == c - 1)
    {
        cout << endl;
        matrixSum(row + 1, 0, r, c, A, B);
    }
    else
        matrixSum(row, collum + 1, r, c, A, B);
}
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> A(r, vector<int>(c));
    vector<vector<int>> B(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> B[i][j];
        }
    }
    matrixSum(0, 0, r, c, A, B);
}