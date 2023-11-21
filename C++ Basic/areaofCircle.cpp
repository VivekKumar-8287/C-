// Area of Circle

#include <iostream>
using namespace std;

int main()
{
    float r, area;
    cout << "Enter the radius ";
    cin >> r;
    // area = (float)22 / 7 * r * r;
    // area = 22 / 7.0 * r * r;
    area = 3.1425f * r * r;
    cout << "Area is " << area << endl;
    return 0;
}