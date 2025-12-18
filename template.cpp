#include <iostream>
using namespace std;
template <class T>

class A 
{
    public:
    T num1;
    T num2;
    A(T n1, T n2)
    {
        num1=n1;
        num2=n2;
    }
    void add()
    {
        cout<<"num1 + num2 = "<<num1+num2<<endl;
    }
};

int main()
{
    A<int> intadd(3,4);
    A<float> floatadd(7.5,2.1);
    intadd.add();
    floatadd.add();
    return 0;
}
