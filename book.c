#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <book.h>


//دالة إضافة كتاب
int addBook(book book) {
    char answer;
    printf("=========================\n        ADD BOOK\n=========================\n");
    printf("Enter name of the book : "); // إدخال اسم الكتاب
    fgets(book.name , MAX_LETTERS , stdin);
    book.name[strcspn(book.name , "\n")] = '\0';
    printf("Enter type of the book :");
    fgets(book.type , 64 , stdin);
    book.type[strcspn(book.type , "\n")] = '\0';
    printf("Enter number of page in the book : ");
    scanf("%d" , &book.pages);
    getchar();
    printf("Enter name of writer : ");
    fgets(book.writer , 64 , stdin);
    book.writer[strcspn(book.writer , "\n")] = '\0';
    printf("Enter the date of writing of the book : ");
    fgets(book.date , 24 , stdin);
    book.date[strcspn(book.date , "\n")] = '\0';
    printf("Do you want to creat a description for the book (y for yes and n for no)?\n");
    scanf("%c" , &answer);
    getchar();
    if (answer == 'y') {
        printf("Enter the description of book : ");
        fgets(book.description , BOOK_DESCRIPTION , stdin);
        book.description[strcspn(book.description , "\n")] = '\0';
        printf("The book is succesfule added.");
    } else if (answer == 'n') {
        printf("The book is succesfule added.");
    } else {
        printf("The answer don't existe.");
    }

    return 1;
}