#define MAX_LETTERS 100

typedef struct book {
    char name[MAX_LETTERS];
    int pages;
    char date[12];
    char writer[64];
    char type[32];
}book;