#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) { // argc is arg count, argv is the arg variables
    ofstream outfile("args.txt");

    for (int i = 0; i < argc; ++i) {
        outfile << argv[i] << "\n";
    }

    outfile.close();
} // Thanks to XMLScott for converting the c++ one into C :)
