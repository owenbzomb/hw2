#include <iostream>
#include <string>
#include <set>
#include <cctype>

#include "stats_mode.h"

using std::cout;
using std::string;

namespace stats_mode{

void run(int argc, char* argv[]){

    if(argc < 3){
        cout << "Error: stats only takes one input string\n";
        return;
    }

    string str = argv[2];

    cout << "Length: " << str.size() << "\n";

    std::set<char> unique;

    for(char c : str){
        unique.insert(c);
    }

    cout << "Unique characters: " << unique.size() << "\n";

    bool alnum = true;

    for(char c : str){
        if(!std::isalnum(c)){
            alnum = false;
        }
    }

    if(alnum){
        cout << "Alphanumeric only\n";
    }
    else{
        cout << "Not alphanumeric\n";
    }

    string reversed_str = "";

    for(int i = str.size()-1; i >= 0; i--){
        reversed_str += str[i];
    }

    cout << "Reversed: " << reversed_str << "\n";

    string no_spaces = "";

    for(char c : str){
        if(!std::isspace(c))
            no_spaces += c;
    }

    cout << "Without spaces: " << no_spaces << "\n";

    string lowercase = str;

    for(char &c : lowercase){
        c = std::tolower(c);
    }

    for(char &c : reversed_str){
    c = std::tolower(c);
    }

    if(lowercase == reversed_str)
        cout << "Palindrome\n";
    else
        cout << "Not palindrome\n";

}
}
