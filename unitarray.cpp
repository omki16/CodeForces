#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int length;
        cin >> length;
        int arr[length];
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        int onecount = 0;
        int minusonecount = 0;
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == 1)
            {
                onecount++;
            }
            else if (arr[i] == -1)
            {
                minusonecount++;
            }
        }
        if (onecount > minusonecount)
        {
            if (minusonecount % 2 ==0)
            {
                cout << '0' << endl;
            }
            else
            {
                cout << '1' << endl;
            }
        }
        else
        {
            int diff = minusonecount - onecount;
            int count = 0;
            if (diff % 2 == 0)
            {
                count = diff / 2;
                onecount += count;
                minusonecount -= count;
                if (minusonecount % 2 == 0)
                {
                    cout << count << endl;
                }
                else
                {
                    cout << count + 1 << endl;
                }
            }
            else
            {
                count = (diff + 1) / 2;
                onecount += count;
                minusonecount -= count;
                if (minusonecount % 2 == 0)
                {
                    cout << count << endl;
                }
                else
                {
                    cout << count + 1 << endl;
                }
            }
        }     
    }
    return 0;
}
