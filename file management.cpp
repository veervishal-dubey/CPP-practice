#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outf;
    outf.open("Country");
    outf<<"USA\n";
    outf<<"India\n";
    outf<<"Russia\n";
    outf.close();
    
    ifstream inf;
    
    const int n= 80;
    char line[n];
    
    inf.open("Country");
    cout<<"Content of Country\n";
    while (inf)
    {
        inf.getline(line,n);
        cout<<line<<endl;
        if (inf.eof()!=0)
            exit(1);
    }
    inf.close();
    return 0;
}
