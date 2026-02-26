#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int robot_pos[n];
        for (int j = 0; j < n; j++)
        {
            cin >> robot_pos[j];
        }
        int spikes_pos[m];
        for (int j = 0; j < m; j++)
        {
            cin >> spikes_pos[j];
        }
        string intructions;
        cin >> intructions;

        for (int i = 0; i < intructions.size(); i++)
        {
            if (intructions[i] == 'L')
            {
                for (int j = 0; j < n; j++)
                {
                    if (robot_pos[j] != -1000000)
                    {
                        robot_pos[j] -= 1;
                    }
                }
            }
            else if (intructions[i] == 'R')
            {
                for (int j = 0; j < n; j++)
                {
                    if (robot_pos[j] != -1000000)
                    {
                        robot_pos[j] += 1;
                    }
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (robot_pos[j] != -1000000)
                {
                    for (int t = 0; t < m; t++)
                    {
                        if (robot_pos[j] == spikes_pos[t])
                        {
                            robot_pos[j] = -1000000;
                            break;
                        }
                    }
                }
            }

            int robout_lived = 0;
            for (int j = 0; j < n; j++)
            {
                if (robot_pos[j] != -1000000)
                {
                    robout_lived++;
                }
            }
            cout << robout_lived << " ";
        }
        cout << endl;
    }

    return 0;
}
