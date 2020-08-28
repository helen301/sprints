
void mx_printchar(char c);

void mx_print_alphabet(void) {
    for(int f = 65; f<=90; f++) {
    	
		int k = 0;

   		 if(f%2 != 0) {
         	k = f;
    		mx_printchar(k);
   		 } else {
			k = f + 32;
    		mx_printchar(k);    
		}
	}
        mx_printchar('\n');
}
