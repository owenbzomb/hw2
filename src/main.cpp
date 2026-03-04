#include <iostream>
#include <string>

#include "text_mode.h"
#include "add_mode.h"
#include "stats_mode.h"

using std::cout;
using std::string;

int main(int argc, char* argv[]){

    if(argc < 2){
        cout << "Usage: ./analyzer <mode> [arguments]\n";
        return 1;
    }

    string mode = argv[1];
    int mode_num = 0;

    if(mode == "text") mode_num = 1;
    if(mode == "add") mode_num = 2;
    if(mode == "stats") mode_num = 3;

    switch(mode_num){

        case 1:
            text_mode::run(argc, argv);
            break;

        case 2:
            add_mode::run(argc, argv);
            break;

        case 3:
            stats_mode::run(argc, argv);
            break;

        default:
            cout << "Invalid mode\n";
            return 1;
    }

    return 0;
}
