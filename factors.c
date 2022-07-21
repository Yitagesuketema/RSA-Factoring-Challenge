#include "main.h"
#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int main(int argc, char *argv[])
{
if (argc == 2)
    {
    FILE *textfile;
    int fact = 1;
    char line[MAX_LINE_LENGTH];
    textfile =fopen(argv[1], "r");
    if(textfile == NULL)
        return 1;
            while(fgets(line, MAX_LINE_LENGTH, textfile))
                {
            printf(line);
                }
fclose(textfile);
return 0;
}
}