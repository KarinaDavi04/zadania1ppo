//bêdê poprawiaæ, bo wiem ¿e to nie jest poprawnie
#include <iostream>
#include <fstream>
using namespace std;
fstream File;
 
int main() { 
int t;
File.open("wsp.txt",ios::in); 
while(!File.eof()){

File >>t;
cout<<t<<"\n";
}
File.close();
}
