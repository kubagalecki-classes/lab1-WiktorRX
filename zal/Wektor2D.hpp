class Wektor2D
{
public:
    Wektor2D()
    {
        x = 0.;
        y = 0.;
        cout << "Stworzono wektor (3,4)\n";
    }
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
        cout << "Stworzono wektor (" << x << "," << y << ")\n";
    }
    ~Wektor2D() { cout << "Z fartem (" << x << "," << y << ")\n"; }

    
    void   print() { cout << "Wektor 2D: x=" << x << ", y=" << y << endl; }
    void   setX(int xxx) { x = xxx; };
    double getX() { return x; }
    void   setY(int yyy) { y = yyy; };
    double getY() { return y; }
    private:
    double x;
    double y;

};
