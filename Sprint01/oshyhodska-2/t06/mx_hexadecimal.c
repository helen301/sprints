
void mx_printchar(char c);

void mx_hexadecimal(void) {
    for(int a = 0x30; a>=0x30 && a<=0x39; a++) {
    mx_printchar(a);
    }
    for(int b = 0x41; b>=0x41 && b<=0x46; b++) {
    mx_printchar(b);
    }
    mx_printchar('\n');
}

 
