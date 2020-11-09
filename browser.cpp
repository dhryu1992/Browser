#include "browser.h"

char* openFile(const char* filename) { 
    int count = 0;
    int total = 0;
    char str[500] = {0, };


    FILE* pfile = fopen(filename, "r");
        if(pfile == NULL) {
            printf("파일이 없습니다");
    }
    while(feof(pfile) == 0) {
    
    fread(str, sizeof(str), 1, pfile);
    
    
   
    total += count;
    }

    
    fclose(pfile);

    return str;
}






