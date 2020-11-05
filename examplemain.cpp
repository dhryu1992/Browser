#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    FILE* pfile = fopen("example.js", "r");
        if(pfile == NULL) {
            printf("파일이 없습니다.");
            return 0;
        }

        char str[500] = {0, };
        fread(str, 500, 1, pfile);
        fclose(pfile);
        printf("%s\n", str);
        return 0;
}
