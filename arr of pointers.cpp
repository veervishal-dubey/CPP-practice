#include <iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};
    int *arrptr[5];
    
    for (int i=0;i<5;i++)
    {
        arrptr[i]=&arr[i];
    }
    for (int i=0;i<5;i++)
    {
        cout<<"the value at "<<arrptr[i]<<" is "<<*arrptr[i]<<" and the actual value is "<<arr[i]<<'\n';
    }
    return 0;
}
