#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) { // argc is arg count, argv is the arg variables
    FILE *outfile=fopen("args.txt","w");

    for (int i = 0; i < argc; ++i) {
        fputs(argv[i], outfile); 
    fputs("\n", outfile);
    
    }

    fclose(outfile);
}
// Thanks to XMLScott for converting the c++ one into C :) and also fixing it 
