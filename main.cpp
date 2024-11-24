#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void f_1(){
ifstream readfile("read.txt");
vector <string> readvector;
string line;
while(getline(readfile,line)){
        readvector.push_back(line);
        //cout<<line<<endl;
}
readfile.close();
}

void f_2(){

}

void f_3(){

}

int main(){
f_1();
f_2();
f_3();
}
