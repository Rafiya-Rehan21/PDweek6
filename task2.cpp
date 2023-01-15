#include <iostream>
using namespace std;
float totalMarks(float marks1, float marks2, float marks3, float marks4, float marks5);
string grading(string grade, float total);
main()
{
    string name;
    float marks1;
    float marks2;
    float marks3;
    float marks4;
    float marks5;
    float total;
    string grade;
    cout << "Enter name of student:";
    cin >> name;
    cout << "Enter marks of english:";
    cin >> marks1;
    cout << "Enter marks of maths:";
    cin >> marks2;
    cout << "Enter marks of chemistry:";
    cin >> marks3;
    cout << "Enter marks of social sciences:";
    cin >> marks4;
    cout << "Enter marks of biology:";
    cin >> marks5;
    total = totalMarks(marks1, marks2, marks3, marks4, marks5);
    cout << "Name of student is: " << name << endl;
    cout << "Total marks of student is:" << total << endl;
    grade =grading(grade , total);
    cout << "Grade of student is:" << grade << endl;
}
float totalMarks(float marks1, float marks2, float marks3, float marks4, float marks5)
{
    float total;
    string grade;
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    return total;
}
string grading(string grade, float total)
{
    float percentage;
    percentage = (total / 500) * 100;
    cout << percentage << endl;
    if (percentage > 90 && percentage <= 100)
    {
        grade = "A+";
    }
    else if (percentage > 80 && percentage <= 90)
    {
        grade = "A";
    }
    else if (percentage > 70 && percentage <= 80)
    {
        grade = "B+";
    }
    else if (percentage > 60 && percentage <= 70)
    {
        grade = "B";
    }
    else if (percentage > 50 && percentage <= 60)
    {
        grade = "C";
    }
    else if (percentage > 40 && percentage <= 50)
    {
        grade = "D";
    }
    else if (percentage < 40)
    {
        grade = "F";
    }
    return grade;
}