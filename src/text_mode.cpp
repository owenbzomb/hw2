#include <iostream>
#include <string>
#include <cctype>

#include "text_mode.h"

using std::cout;
using std::string;

namespace text_mode{

void run(int argc, char* argv[]){

    if(argc < 3){
        cout << "Error: text only takes one input string";
        return;
    }

    string str = argv[2];

    cout << "Original: " << str << "\n";
    cout << "Length: " << str.size() << "\n";

    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int punct = 0;

    for(char c : str){
        if(std::isalpha(c)) letters++;
        if(std::isdigit(c)) digits++;
        if(std::isspace(c)) spaces++;
        if(std::ispunct(c)) punct++;
    }

    cout << "Letters: " << letters << "\n";
    cout << "Digits: " << digits << "\n";
    cout << "Spaces: " << spaces << "\n";
    cout << "Punctuation: " << punct << "\n";

    string upper = str;

    for(size_t i = 0; i < upper.size(); i++){
        upper[i] = std::toupper(upper[i]);
    }

    cout << "Uppercase copy: " << upper << "\n";

    for(size_t i = 0; i < str.size(); i++){
        str[i] = std::tolower(str[i]);
    }

    cout << "Lowercase original: " << str << "\n";

    if(str.find("test") != string::npos){
        cout << "Contains test\n";
    }
    else{
        cout << "Does not contain test\n";
    }

    size_t pos = str.find(' ');

    if(pos != string::npos){
        string first = str.substr(0, pos);
        cout << "First word: " << first << "\n";
    }

}
}
