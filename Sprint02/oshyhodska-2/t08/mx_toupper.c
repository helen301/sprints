//#include <stdio.h>

int mx_toupper(int c) {
    if(c > 96 && c < 123) {
       return(c-32);
}
    else if(c > 64 && c < 91) {
       return c;
}
       return 0; 
}

//int main() {
//    printf("%c", mx_toupper('z'));
//}
