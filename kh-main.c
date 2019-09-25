#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "./kh-std/strings.h"

int index_of(const char str[], const char char_to_find);
bool starts_with(const char str_input[], const char starts_with[]);

int main(int argc, char* argv[]) 
{
    char* input_path = argv[1];

    if (argc < 1) { printf("Error: No input file.\n"); return -1; }

    return 0;
}
