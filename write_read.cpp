#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream fout("test.txt");
    fout<<"Hello File"; fout.close();
    ifstream fin("test.txt");
    string line; getline(fin,line);
    cout<<"File content: "<<line;
    return 0;
}
