#include <stdbool.h>
//#include <stdio.h>

bool mx_isalpha(int c) {
    if((c >= 65 && c <= 90) || (c >=97 && c <= 122)) {
    return 1;
    }
    else {
       return 0;
    }
}

//int main() {
//  printf("%d", mx_isalpha(9));
//}
