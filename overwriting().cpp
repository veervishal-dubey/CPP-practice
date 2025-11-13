#include <iostream>
#include <cstdlib>
#include <new>

using namespace std;
class loc{
    int longitude, latitude;
    public:
    loc(int x=0, int y=0)
    {
        longitude=x;
        latitude=y;
    }
    void show()
    {
        cout<<"longitude "<<longitude<<" ";
        cout<<"latitude "<<latitude<<"\n";
    }
    loc operator+(loc l2);
    loc operator()(int i, int j);
};

loc loc :: operator()(int i, int j)
{
    longitude=i;
    latitude=j;
    return *this;
}
loc loc :: operator+(loc l2)
{
    loc temp;
    temp.longitude=longitude+l2.longitude;
    temp.latitude=latitude+l2.latitude;
    return temp;
}
int main()
{
    loc o1(10,20),o2(30,50);
    o1.show();
    o1(10,10);
    o1.show();
    o2=o2+o1(1,1);
    o2.show();
}
