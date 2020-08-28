//#include <stdio.h>

int mx_max(int a, int b, int c) {
	if(a < b && b < c) {
      return c;
}
	else if(a < b && c < b) {
      return b;
}
    else {
       return a;
}
}

//int main() {
//	printf("%d", mx_max(22, 5, 1));
//}
