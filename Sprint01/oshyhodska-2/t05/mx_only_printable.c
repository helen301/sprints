
void mx_printchar(char c);

void mx_only_printable(void) {
    for(int k = 126; k<=126 && k>=32; k--) {
         mx_printchar(k);
    }
    mx_printchar('\n');
  }

int main() {
    mx_only_printable();
}
