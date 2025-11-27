#include <iostream>
using namespace std;

int main()
{
    int v[3]={120,43,61};
    int *ptr;
    ptr=v;
    cout<<"v is "<<&v<<"\n\n";
    
    for (int i=0;i<3;i++)
    {
        cout<<"value at ptr "<<ptr<<"\n";
        cout<<"value at *ptr "<<*ptr<<"\n";
        cout<<"value at &ptr"<<&ptr<<"\n";
        ptr++;
    }

    return 0;
}
