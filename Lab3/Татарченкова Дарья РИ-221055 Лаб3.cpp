#include <fstream>

using namespace std;

int main(){
    ifstream in("MyTxt.txt");
    ofstream out("NewMyTxt.txt");

    string File;
    in >> File;
    while (!in.eof()){
        int number = stoi(File)*20-1;
        out << number << " ";
        in >> File;
    }
}
