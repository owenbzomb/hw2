#include <iostream>
#include <string>

#include "add_mode.h"

using std::cout;
using std::string;

namespace add_mode{

int add(int a, int b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}

string add(string a, string b){
    return a + b;
}

void run(int argc, char* argv[]){

    if(argc < 4){
        cout << "Error: add takes two arguments\n";
        return;
    }

    string a = argv[2];
    string b = argv[3];

    if(a.find('.') != string::npos || b.find('.') != string::npos){

        double x = std::stod(a);
        double y = std::stod(b);

        cout << "Result: " << std::to_string(add(x,y)) << "\n";
    }

    else if(std::isdigit(a[0]) && std::isdigit(b[0])){

        int x = std::stoi(a);
        int y = std::stoi(b);

        cout << "Result: " << std::to_string(add(x,y)) << "\n";
    }

    else{
        cout << "Result: " << add(a,b) << "\n";
    }

}
}
