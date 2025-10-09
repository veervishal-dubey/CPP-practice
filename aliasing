#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char letter = 'V';
    char &a=letter; //alias
    cout<<"Original letter:"<<letter<<endl;
    cout<<"Reference: "<<a<<endl;
    
    a='B';//shows that the reference variable is just a alias name. if you change the alias name, you change the original value
    
    cout<<"Original letter:"<<letter<<endl;
    cout<<"Reference: "<<a<<endl;

    int x=10;
    int *p=&x;
    int &m=*p;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<m<<endl;
    return 0;
}
