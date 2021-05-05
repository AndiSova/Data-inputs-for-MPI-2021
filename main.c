#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int j;
    scanf("%d",&j);
    switch(j)
    {
        case 1:
        {
            unsigned long x;
            int i;
            FILE *fp;
            fp = fopen("Output.txt", "w");
            for(i=-1; i<10000; i++){
                x = rand();
                x <<= 15;
                x ^= rand();
                x %= 1000001;
                fprintf(fp, "%d\n", x);
            }
            break;
        }
        case 2:
        {
            unsigned long x;
            int i;
            FILE *fp;
            fp = fopen("Output.txt", "w");
            for(i=-1; i<10000; i++){
                x = rand() % 20000 + (-10000);
                fprintf(fp, "%d\n", x);
            }
            break;
        }
        case 3:
        {
            unsigned long x;
            int i;
            FILE *fp;
            fp = fopen("Output.txt", "w");
            for(i=-1; i<10000; i++){
                x = rand() %10000+ (-10000);
                fprintf(fp, "%d\n", x);
            }
            fclose(fp);
            break;
        }
    }
    return 0;
}
