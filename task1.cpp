#include <iostream>
using namespace std;
string game(string temperature, string humidity);
main()
{
    string temperature;
    string humidity;
    string activity;
    cout << "Enter temperature:";
    cin >> temperature;
    cout << "Enter humidity:";
    cin >> humidity;
    activity =game(temperature, humidity);
    cout << "Activity should be: " << activity << endl;
}
string game(string temperature, string humidity)
{
    string activity;
    if(temperature == "warm" && humidity == "dry")
    {
        activity = "Play tennis!";
    }
    else if(temperature == "warm" && humidity == "humid")
    {
        activity = "Swim!";
    }
    else if(temperature == "cold" && humidity == "dry")
    {
        activity = "Play Basketball!";
    }
    else if(temperature == "cold" && humidity == "humid")
    {
        activity = "Watch TV!";
    }
    return activity;

}
