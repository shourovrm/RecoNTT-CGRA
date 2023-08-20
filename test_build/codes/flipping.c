#include <stdio.h>
#include <string.h>


int main(){

    char *in = "1100";
    char *out ="";

    int len=4;

    for (int i = 0; i<4 ; i++)
    {
        /* code */
        out[i] = in[len-i-1];
    }
    
    printf("%s ", out);
}