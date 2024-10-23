#include <iostream>
#include <time.h>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point()
    {
        cout << "Default constructor\n";
        x = y = 0;
    }

    Point(int x1, int y1)  
    {
        cout << "Constructor with parameters\n";
        x = x1;
        y = y1;
    }

    void Init()
    {
        x = rand() % 10;
        y = rand() % 10;
    }

    void Init(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    void Output()
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
    Point operator+(const Point& b)
    {
        Point temp;
        temp.x = this->x + b.x;
        temp.y = this->y + b.y;
        return temp;
    }

    Point operator+(int a)
    {
        Point temp;
        temp.x = this->x + a;
        temp.y = this->y + a;
        return temp;
    }
};

int main()
{
    srand(unsigned(time(0)));

    Point a(1, 2);
    Point b(3, 4);

    Point c = a + b; 
    c.Output();
    c = a + 10;  
    c.Output();
}
