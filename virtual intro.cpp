#include <iostream>
using namespace std;

class Shape{
    public:
    void draw()
    {
        cout<<"\ndrawing shape\n";
    }
    virtual void area()
    {
        cout<<"\narea of shape\n";
    }
    
};

class Rectangle : public Shape{
    public:
    void draw()
    {
        cout<<"\nDrawing Rectangle\n";
    }
    void area()
    {
        cout<<"\narea of Rectangle";
    }
};

int main()
{
    Shape s1;
    Rectangle r1;
    s1.area();
    s1.draw();
    r1.area();
    r1.draw();
    return 0;
}
