#include <iostream>
using namespace std;
string checkPoints(int h, int x, int y);
main()
{
    int h;
    int x; 
    int y;
    string remarks;
    cout << "Enter value of h:";
    cin >> h;
    cout << "Enter coordinates of x:";
    cin >> x;
    cout << "Enter coordinates of y:";
    cin >> y;
    remarks=checkPoints(h,x,y);
    cout << "point is:" << remarks << endl;

}
string checkPoints(int h, int x, int y)
{
    string remarks;
    if(y <h && x <2*h)
    {
        remarks ="inside";
    }
    else if(y > h &&  (x < 3*h || x >3*h))
    {
        remarks = "outside";
    }
    if((y > h && y <4*h) && (x >h && x <2*h))
    {
        remarks ="inside";
    }
    else if(y > 4*h && (x <h || x >2*h))
    {
        remarks = "outside";
    }
    if ((y == 0*h || y ==h || y ==2*h|| y==3*h || y== 4*h) && (x =0*h || x ==h || x== 2*h|| x== 3*h))
    {
        remarks = "border";
    }
    return remarks;
}