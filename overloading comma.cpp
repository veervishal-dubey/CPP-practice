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
    loc operator,(loc l2);
};

loc loc :: operator,(loc l2)
{   loc temp;
    temp.longitude=l2.longitude;
    temp.latitude=l2.latitude;
    cout<<"In comma operation\n";
    cout<<l2.longitude<<" "<<l2.latitude<<"\n";
    return temp;
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
    loc o1(10,20); loc o2(30,50); loc o3(1,1);
    o1.show();
    o2.show();
    o3.show();
    cout<<"\n";
    o1=(o1,o2+o2,o3);
    o1.show();
    return 0;
}
