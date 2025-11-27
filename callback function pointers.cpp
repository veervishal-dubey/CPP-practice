#include <iostream>
using namespace std;

int multply(int x, int y)
{
    return x*y;
}

int add(int x, int y)
{
    return x+y;
}


int main()
{   
    int (*fptr)(int, int);
    cout<<"Enter your two numbers: ";
    int x,y;
    cin>>x;
    cin>>y;
    int t;
    
    cout<<"press 1 to multiply 2 to add: ";
    int choice;
    cin>>choice;
    
    switch(choice)
    {
        case 1: fptr=multply;
                t=fptr(x,y);
                cout<<t;
                break;
        case 2: fptr=add;
                t=fptr(x,y);
                cout<<t;
                break;
        default:cout<<"invalid choice";
                break;
    }
    return 0;
}
