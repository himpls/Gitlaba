#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void f_1(){

}

void f_2(vector<string>& readvector){
for(size_t i = 0; i < readvector.size(); ++i){
    cout << readvector[i] << endl;
      }
  }
void f_3(vector<string>& readvector){
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
f_1(readvector);
f_2(readvector);
f_3(readvector);
}
