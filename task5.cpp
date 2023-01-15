#include <iostream>
using namespace std;
float totalPrice(string fruit, string day, float quantity);
main()
{
    string fruit;
    string day;
    float quantity;
    float price;
    cout << "Enter name of fruit:";
    cin >> fruit;
    cout << "Enter day:";
    cin >> day;
    cout << "Enter quantity of fruit:";
    cin >> quantity;
    price = totalPrice(fruit,day,quantity);
    cout << "Total price is:" << price << endl;
}
float totalPrice(string fruit, string day, float quantity)
{
    float price;
    if(fruit == "banana" && (day == "saturday" || day == "sunday"))
    {
        price = quantity * 2.70;
    }
    else if(fruit == "banana" && (day != "saturday" || day != "sunday"))
    {
        price = quantity * 2.50;
    }
    if(fruit == "apple" && (day == "saturday" || day == "sunday"))
    {
        price = quantity * 1.25;
    }
    else if(fruit == "apple" && (day != "saturday" || day != "sunday"))
    {
        price = quantity * 1.20;
    }
    if(fruit == "orange" && (day == "saturday" || day == "sunday"))
    {
        price = quantity * 0.90;
    }
    else if(fruit == "orange" && (day != "saturday" || day != "sunday"))
    {
        price = quantity * 0.85;
    }
    if(fruit == "grapefruit" && (day == "saturday" || day == "sunday"))
    {
        price = quantity * 1.60;
    }
    else if(fruit == "grapefruit" && (day != "saturday" || day != "sunday"))
    {
        price = quantity * 1.45;
    }
    if(fruit == "kiwi" && (day == "saturday" || day == "sunday"))
    {
        price = quantity * 3.00;
    }
    else if(fruit == "kiwi" && (day != "saturday" || day != "sunday"))
    {
        price = quantity * 2.70;
    }
    if(fruit == "pineapple" && (day == "saturday" || day == "sunday"))
    {
        price = quantity * 5.60;
    }
    else if(fruit == "pineapple" && (day != "saturday" || day != "sunday"))
    {
        price = quantity * 5.50;
    }
     if(fruit == "grapes" && (day == "saturday" || day == "sunday"))
    {
        price = quantity * 4.20;
    }
    else if(fruit == "grapes" && (day != "saturday" || day != "sunday"))
    {
        price = quantity * 3.85;
    }
return price;
}
