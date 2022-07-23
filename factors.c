#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 3000
int main(int argc, char *argv[])
{
if (argc == 2)
    {
         long long n,p,q;
    FILE *textfile;
    char line[MAX_LINE_LENGTH];
    textfile =fopen(argv[1], "r");
    if(textfile == NULL)
        return 1;

            while(fgets(line, MAX_LINE_LENGTH, textfile))
{
n = atoll(line);
for ( p = 2;n%p !=0; p++)
 {}
q =n/p;
printf("%lld = %lld * %lld \n",n,q,p);

}
fclose(textfile);
}
return 0;
}