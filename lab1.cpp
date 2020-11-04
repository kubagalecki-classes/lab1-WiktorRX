#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D()
    {
        x = 3;
        y = 4;
        cout << "Stworzono wektor (3,4)\n";
    }
    Wektor2D(int xx, int yy = 1)
    {
        x = xx;
        y = yy;
        cout << "Stworzono wektor (" << x << "," << y << ")\n";
    }
    ~Wektor2D() { cout << "Z fartem (" << x << "," << y << ")\n"; }

    double norm() { return sqrt((x * x) + (y * y)); }
    void   print() { cout << "Wektor 2D: x=" << x << ", y=" << y << endl; }
    void   setX(int xxx) { x = xxx; };
    int    getX() { return x; }
    void   setY(int yyy) { y = yyy; };
    int    getY() { return y; }

private:
    int x;
    int y;
};

int main()
{
    Wektor2D Gary, Harry(17), Merry(6, 9);
    Wektor2D v1{};
    Gary.print();
    Gary.setX(150);
    Gary.print();
}