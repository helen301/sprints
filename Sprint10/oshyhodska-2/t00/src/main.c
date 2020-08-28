#include "printerr.h"

int main(int argc, char *argv[]) {
    char buf = '0';
    int content;

    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return -1;
    }
    content = open(argv[1], O_RDONLY);
    if (content == -1) {
        mx_printerr("error\n");
        return -1;
    }
    else
        while (read(content, &buf, 1) > 0)
            write(1, &buf, 1);
    close(content);
    return 0;
}
