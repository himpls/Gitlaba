#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void f_1(){

} //commit after synchronization

void f_2(vector<string> &readvector){
/*string path="read.txt";
ifstream in;
in.open(path);

if(in.is_open())
{
    string str;
    while(!in.eof())
    {
        str="";
        getline(in,str);
        cout<<str<<endl;
    }
}
else{
    cout<<"File not opened";
}*/

for(size_t i = 0; i < readvector.size(); ++i){
    cout << readvector[i] << endl;
      }
  }
void f_3(){
ofstream out;
out.open("write.txt");
  if (out.is_open())
  {
      for(size_t i = 0; i < readvector.size(); i++){
                out << readvector[i] << endl;
      }
  }
  out.close();
}

int main()
{
    vector<string> readvector;
f_1();
f_2(readvector);
f_3();
}
