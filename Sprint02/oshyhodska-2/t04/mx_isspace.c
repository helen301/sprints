#include <stdbool.h>
//#include <stdio.h>

bool mx_isspace(char c) {
     if((c >8 && c <14) || (c == 32)) {
       return 1;
     }
     else {
       return 0;
     }
}

//int main () {
//   printf("%d", mx_isspace('a'));
//}
