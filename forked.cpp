#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    int no_of_cases;
    cin >> no_of_cases;

    for (int i = 0; i < no_of_cases; i++)
    {
        int x,y;
        cin >> x >> y;

        int kingx, kingy;
        cin >> kingx >> kingy;

        int qunx, quny;
        cin >> qunx >> quny;

        set<pair<int,int>> kingattack;
        set<pair<int,int>> qunattack;

        set<pair<int,int>> possiblemoves = {
            {x,y},{-x,-y},{x,-y},{-x,y},
            {y,x},{-y,-x},{y,-x},{-y,x}
        };

        for (auto mov : possiblemoves)
        {
            int newkingx = kingx + mov.first;
            int newkingy = kingy + mov.second;

            int newqunx = qunx + mov.first;
            int newquny = quny + mov.second;

            kingattack.insert({newkingx,newkingy});
            qunattack.insert({newqunx,newquny});
        }

        vector<pair<int,int>> commonmoves;

        set_intersection(
            kingattack.begin(), kingattack.end(),
            qunattack.begin(), qunattack.end(),
            back_inserter(commonmoves)
        );

        cout << commonmoves.size() << endl;
    }

    return 0;
}
