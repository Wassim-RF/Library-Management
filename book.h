#define MAX_LETTERS 100
#define BOOK_DESCRIPTION 512

typedef struct book {
    char name[MAX_LETTERS];
    int pages;
    char date[24];
    char writer[64];
    char type[64];
    char description[BOOK_DESCRIPTION];
}book;