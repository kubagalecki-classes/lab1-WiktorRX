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
    }
    Wektor2D(int xx, int yy = 1)
    {
        x = xx;
        y = yy;
    }
    ~Wektor2D() { cout << "Z fartem (" << x << "," << y << ")\n"; }

    int x;
    int y;

    double norm() { return sqrt((x * x) + (y * y)); }
    void   print() { cout << "Wektor 2D: x=" << x << ", y=" << y << endl; }
};

class Informer
{
  public:
  
}

int main()
{
    Wektor2D Gary, Harry(17), Merry(6, 9);
    Gary.print();
}