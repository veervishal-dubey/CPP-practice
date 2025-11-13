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
        cout<<"longitude"<<longitude;
        cout<<"latitude"<<latitude;
    }
};

void *operator new(size_t size)
{
    void *p;
    cout<<"In overloaded new.\n";
    p=malloc(size);
    if (!p)
    {
        bad_alloc ba;
        throw ba;
    }
    return p;
}
void operator delete(void *p)
{
    cout<<"In overloaded delete.\n";
    free(p);
}
int main()
{
    loc *l1, *l2;
    try{
        l1= new loc(10,20);
    }
    catch (bad_alloc ba)
    {
        cout<<"cannot allocate l1.\n";
        return -1;
    }
    try{
        l2=new loc(20,30);
    }
    catch(bad_alloc ba)
    {
        cout<<"cannot allocate l2.\n";
        return -1;
    }
    float *f1;
    try
    {
        f1=new float;
    }
    catch(bad_alloc xa)
    {
        cout<<"allocation error for f.\n";
        return -1;
    }
    *f1=10.50;
    cout<<*f1<<"\n";
    l1->show();
    l2->show();
    delete l1;
    delete l2;
    return 0;
}
// -> is like the dot operator for pointers and when we pass by references.
