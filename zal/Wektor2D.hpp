class Wektor2D
{
tor2D
{
public:
    Wektor2D()
    {
        x = 0;
        y = 0;
        cout << "Stworzono wektor (3,4)\n";
    }
    Wektor2D(int xx, int yy)
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
    double x;
    double y;

};
