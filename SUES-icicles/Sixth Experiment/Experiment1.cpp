#include <iostream>
#include <string>
using namespace std;

class vector
{
private:
    double x;
    double y;
public:
    vector(double x0 = 0, double y0 = 0)
    {
        x = x0;
        y = y0;
    }

    vector operator+(vector &in)
    {
        vector out = vector();
        out.x = x + in.x;
        out.y = y + in.y;
        return out;
    }
    
    void display()
    {
        cout << "[" << x << "," << y << "]";
    }
};

int main()
{
    double x, y; 
    cin >> x;
    cin >> y;
    vector f = vector(x, y);
    cin >> x;
    cin >> y;
    vector s = vector(x, y);
    vector t = vector();
    t = f + s;
    cout << "a + b = ";
    t.display();
}