#include <iostream>
using namespace std;
int main()
{
    int overall_problem, needed_time_to_reach;
    cin >> overall_problem >> needed_time_to_reach;

    int needed_time_to_solve = 0;
    for (int i = 1; i <= overall_problem; i++)
    {
        needed_time_to_solve += 5 * i;
    }

    int available_time_to_go = 240 - needed_time_to_solve;

    if (available_time_to_go >= needed_time_to_reach)
    {
        cout << overall_problem << endl;
    }
    else
    {
        int solved = 0, time_used = 0;
        for (int i = 1; i <= overall_problem; i++)
        {
            time_used += 5 * i;
            if (time_used + needed_time_to_reach <= 240)
            {
                solved = i;
            }
        }
        cout << solved << endl;
    }
}
