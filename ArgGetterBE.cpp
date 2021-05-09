#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) { // argc is arg count, argv is the arg variables
    std::ofstream outfile("args.txt");

    for (int i = 0; i < argc; ++i) {
        outfile << argv[i] << endl;
    }

    outfile.close();
}
