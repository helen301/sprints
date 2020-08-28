
void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
	for(unsigned int b = 1; b <= length; b+=1) {
    	for(unsigned int k = 0;  b > k; k+=1) { 
      		 mx_printchar(c);
		}
        mx_printchar('\n');
	}
}

//int main () {
//	 mx_isos_triangle(3, '*');
//}
   
