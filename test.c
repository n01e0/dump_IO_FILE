#include "dump_IO_FILE.c"

int main() {
    FILE* a = fopen("a.out", "r");
    dump_FILE(a);
}
