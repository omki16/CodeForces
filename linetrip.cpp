#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int no_of_stations, distance;
        cin>>no_of_stations>>distance;
        int arr[no_of_stations];
        for (int i = 0; i < no_of_stations; i++)
        {
            cin >> arr[i];
        }

        int max_station_distance = arr[0];
        for (int i = 1; i < no_of_stations; i++)
        {
            if (max_station_distance < arr[i]-arr[i-1])
            {
                max_station_distance = arr[i]-arr[i-1];
            } 
        }
        int max_laststation = 2*(distance-arr[no_of_stations-1]);

        if (max_laststation > max_station_distance)
        {
            cout<< max_laststation << endl;
        }
        else
        {
            cout<< max_station_distance << endl;
        }
        
        

    }
    
    return 0;
}
