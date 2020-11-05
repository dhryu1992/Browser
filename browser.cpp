#include "browser.h"

void openFile(const char* filename, const char* mode) {
    FILE* pfile = fopen(filename, mode);
        if(pfile == NULL) {
            printf("파일이 없습니다");
    }

    char str[500] = {0, };
    fread(str, 500, 1, pfile);
    fclose(pfile);
    printf("%s\n", str);
}
