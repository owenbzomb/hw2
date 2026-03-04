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

    cout << "Unique: " << unique.size() << "\n";

    bool alnum = true;

    for(char c : str){
        if(!std::isalnum(c)){
            alnum = false;
        }
    }

    if(alnum){
        cout << "Alphanumeric: Yes\n";
    }
    else{
        cout << "Alphanumeric: No\n";
    }

    string reversed_str = "";

    for(size_t i = str.size(); i > 0; i--){
        reversed_str += str[i-1];
    }

    cout << "Reversed: " << reversed_str << "\n";

    string no_spaces = "";

    for(char c : str){
        if(!std::isspace(c))
            no_spaces += c;
    }

    cout << "Without spaces: " << no_spaces << "\n";

    string lowercase = "";

    for(char c : str){
        if(!std::isspace(c))
            lowercase += std::tolower(c);
    }

    string reversed = "";

    for(size_t i = lowercase.size(); i > 0; i--){
        reversed += lowercase[i-1];
    }

    if(lowercase == reversed){
        cout << "Palindrome: Yes\n";
    }
    else{
        cout << "Palindrome: No\n";
    }

}
}
