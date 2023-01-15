#include <iostream>
using namespace std;
float studioBill(string month, int stay);
float appartmentBill(string month, int stay);
main()
{
    string month;
    int stay;
    float total;
    cout << "Enter name of month:";
    cin >> month;
    cout << "Enter number of stays:";
    cin >> stay;
    total =studioBill(month,stay);
    cout << "The total cost for studio is: $" << total << endl;
    total =appartmentBill(month,stay);
    cout << "The total cost for appartment is: $" << total << endl;

}
float studioBill(string month, int stay)
{
    float cost;
    float discount;
    float total;
    if (month == "May" || month == "October")
    {
        cost = 50 * stay;
        total = cost;
        if(stay > 7 && stay <=14)
        {
            discount = (5 * cost) /100;
            total = cost - discount;
        }
        else if(stay > 14)
        {
            discount = (30 * cost) /100;
            total = cost - discount;
        }
    }
    if (month == "June" || month == "September")
    {
        cost = 75.20 * stay;
        total = cost;
        if(stay > 14)
        {
            discount = (20 * cost) /100;
            total = cost - discount;
        }
    }
    if (month == "July" || month == "August")
    {
        cost = 76.00 * stay;
        total = cost;
    }
    return total;
}
float appartmentBill(string month, int stay)
{
    float cost;
    float discount;
    float total;
    if (month == "May" || month == "October")
    {
        cost = 65 * stay;
        total = cost;
        if(stay > 14)
        {
            discount = (10 * cost) /100;
            total = cost - discount;
        }
    }
    else if (month == "June" || month == "September")
    {
        cost = 68.70 * stay;
        total = cost;
        if(stay > 14)
        {
            discount = (10 * cost) /100;
            total = cost - discount;
        }
    }
    else if (month == "July" || month == "August")
    {
        cost = 77 * stay;
        total = cost;
        if(stay > 14)
        {
            discount = (10 * cost) /100;
            total = cost - discount;
        }
    }
    return total;
}