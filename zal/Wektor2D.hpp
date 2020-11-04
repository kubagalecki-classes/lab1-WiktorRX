class Wektor2D
{
  public:
    Wektor2D()
    {
        x = 0.;
        y = 0.;
    }
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
        
    }
    

    void   setX(int xxx) { x = xxx; };
    double getX() { return x; }
    void   setY(int yyy) { y = yyy; };
    double getY() { return y; }

  Wektor2D operator+ (Wektor2D v1, Wektor2D v2)
  {
  return Wektor2D{v1.x+v2.x, v1.y+v2.y};
  }

  double operator* (Wektor2D v1, Wektor2D v2)
    {
  return v1.x*v2.x + v1.y*v2.y;
  }

  private:
  double x;
  double y;

};
