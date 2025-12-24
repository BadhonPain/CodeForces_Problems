#include <bits/stdc++.h>
using namespace std;
int main()
{
    int student_no;
    cin >> student_no;
    int students[student_no];
    int team_programming[student_no];
    int team_olympiad[student_no];
    int team_PE[student_no];
    int type1count = 0;
    int type2count = 0;
    int type3count = 0;

    for (int i = 0; i < student_no; i++)
    {
        cin >> students[i];
        if (students[i] == 1)
        {
            team_programming[type1count] = i + 1; 
            type1count++;
        }
        else if (students[i] == 2)
        {
            team_olympiad[type2count] = i + 1; 
            type2count++;
        }
        else
        {
            team_PE[type3count] = i + 1;
            type3count++;
        }
    }

    int result = min(type3count, min(type1count, type2count));
    cout << result << endl;
    for (int i = 0; i < result; i++)
    {
        cout << team_programming[i] << " " << team_olympiad[i] << " " << team_PE[i] << endl;
    }
}
