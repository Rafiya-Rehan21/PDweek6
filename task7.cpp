#include <iostream>
#include <cmath>
using namespace std;
string calculateTime(int startingHour, int startingMinutes, int arrivalHour, int arrivalMinutes);
main()
{
    int startingHour;
    int startingMinutes;
    int arrivalHour;
    int arrivalMinutes;
    string remarks;
    cout << "Enter starting hour of exam in 24 hour format:";
    cin >> startingHour;
    cout << "Enter starting minutes of exam:";
    cin >> startingMinutes;
    cout << "Enter arrival hour in 24 hour format:";
    cin >> arrivalHour;
    cout << "Enter arrival minutes:";
    cin >> arrivalMinutes;
    remarks=calculateTime(startingHour, startingMinutes,arrivalHour,arrivalMinutes);
    cout << remarks << endl;
}
string calculateTime(int startingHour, int startingMinutes, int arrivalHour, int arrivalMinutes)
{
    int hourDif;
    int minuteDif;
    string remarks;
    minuteDif= abs(startingMinutes - arrivalMinutes);
    hourDif = abs(startingHour - arrivalHour);
    if(startingHour > arrivalHour && startingMinutes > arrivalMinutes)
    {
        remarks = "On time!";
        cout << (minuteDif % 60) << "minutes before start" << endl; 
    }
    if(startingHour == arrivalHour && startingMinutes == arrivalMinutes)
    {
        remarks = "On time!";
    }

    if(startingHour > arrivalHour && (startingMinutes <= arrivalMinutes || startingMinutes >= arrivalMinutes))
    {
        minuteDif= abs(startingMinutes - arrivalMinutes);
        hourDif = abs(startingHour - arrivalHour);
        if((hourDif ==0 || hourDif <=1) &&  minuteDif >= 30)
        {
            remarks = "On Time!";
            cout << minuteDif << " minutes before start" << endl;
        }
       else if((hourDif >1 || hourDif ==1) && (minuteDif < 30 || minuteDif > 30))
        {
            remarks = "Too Early!!";
            cout <<  hourDif << "hours" << ":" <<  minuteDif << "minutes early" << endl;
        }
    }
   if(startingHour <= arrivalHour && startingMinutes < arrivalMinutes)
    {
        remarks = "Late!";
        cout << hourDif  << "hours" << minuteDif << " minutes late" << endl;
    }
    else if(startingHour <= arrivalHour && startingMinutes > arrivalMinutes)
    {
        remarks = "Late";
        cout << hourDif  << "hours late " << (minuteDif % 60)  <<  "minutes late" << endl;
    }


    return remarks;
    

}
