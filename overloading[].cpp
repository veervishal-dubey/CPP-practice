#include <iostream>
using namespace std;
class arraytype{
    int a[3];
    public:
    arraytype(int i=0, int j=0, int k=0){
        a[0]=i;
        a[1]=j;
        a[2]=k;
    }
    int &operator[](int x){return a[x];}
};
int main()
{
   arraytype o1(1,2,3);
   arraytype o2;
   cout<<o1[2];
   cout<<"\n";
   o2[1]=25;
   cout<<o2[1];
   return 0;
}
