#include <iostream>
using namespace std;

int main()
{
    int v[3]={120,43,61};
    int *ptr,*arrptr;
    ptr=v;
    arrptr=&v[0];
    cout<<"v is "<<&v<<"\n\n";
    
    for (int i=0;i<3;i++)
    {
        cout<<"value at ptr "<<ptr<<"\n";
        cout<<"value at *ptr "<<*ptr<<"\n";
        cout<<"value at &ptr"<<&ptr<<"\n";
        ptr++;
        cout<<"value at arrptr "<<(arrptr+i)<<"\n";
        cout<<"value at *arrptr "<<*(arrptr+i)<<"\n";
        cout<<"value at &arrptr "<<&arrptr<<"\n";
        
        cout<<"\n\n";
    }
    
    int *ptr1,*ptr2,*ptr3;
    ptr1=&v[0];
    ptr2=&v[2];
    ptr3=&v[1];
    cout<<ptr1-ptr2<<"\n"; 
    // this gives the difference of indices. This has a meaningful result in the memory because of the difference of indices.
    cout<<*ptr1-*ptr2<<"\n";
    // this gives the difference of the values.
    // cout<<ptr1+ptr3<<'\n';
    // this will not work. This does not have a meaningful result in memory.
    cout<<*ptr1+*ptr3<<"\n";
    return 0;
}
