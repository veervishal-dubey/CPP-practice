#include <iostream>
using namespace std;

class BC{
    public:
    int b;
    void show()
    {
        cout<<"b= "<<b<<"\n";
    }
};

class DC:public BC{
    public:
    int d;
    void show()
    {
        cout<<"b= "<<b<<"\n";
        cout<<"d= "<<d<<"\n";
    }
};

int main()
{
    BC *bptr;
    BC base;
    bptr=&base;
    bptr->b=100;
    cout<<"bptr points to base object.\n";
    bptr->show();
    DC derived;
    DC *dptr;
    dptr=&derived;
    // bptr->d=1000; this will give an error. You cant access the child class using parent's pointer.
    dptr->d=10000;
    dptr->b=200; // this works because you can access the parent class using a child pointer.
    // but bptr->b wont change. it will be equal to 100 only.
    cout<<bptr->b<<'\n';
    bptr->show();
    dptr->show();
    
    return 0;
    
}
