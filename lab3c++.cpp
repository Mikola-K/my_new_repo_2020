#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>  

void main() {

    char br[128] ;
    int i = 0;

    scanf("%127s", br);

    while (br[i] ) {
        i++;
    }
    printf("size = %d", i);
}


