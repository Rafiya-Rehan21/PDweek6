#include <iostream>
using namespace std;
float calculateBill(char service, char period, int minutes);
main()
{
    char service;
    char period;
    int minutes;
    float total;
    cout << "Enter type of service used i.e is R or P:";
    cin >> service;
    cout << "Enter number of minutes:";
    cin >> minutes;
    cout << "Enter time period i.e is D or N:";
    cin >> period;
    total = calculateBill(service,period,minutes);
    cout << "Total bill for phone service is :$" << total << endl;
}
float calculateBill(char service, char period, int minutes)
{
    float bill;
    float additional;
    float total;
    if(service == 'R')
    {
    if( minutes < 50)
    {
        bill = 10.00 ;
    }
    else if(minutes > 50)
    {
        bill = 10.00;
        additional = 0.20 * minutes;
        total = bill + additional;
    }
    }
    if(service == 'P' && minutes < 75 && period == 'D')
    {
        bill = 25 ;
        total = bill;
    }
    else if(service == 'P' && minutes > 75 && period == 'D')
    {
        bill = 25;
        additional = 0.10 * minutes;
        total = bill + additional;
    }   
    if(service == 'P' )
    {
    if (minutes < 100 && period == 'N')
    {
        bill = 25;
        total = bill;
    }
    if(minutes > 100 && period =='N')
    {
        bill = 25;
        additional = 0.05 * minutes;
        total = bill + additional;
    }
    }
return total;
}

