#include <stdio.h>
#include <string.h>
#include <book.h>


//دالة إضافة كتاب
int addBook(book book) {
    printf("=========================\n        ADD BOOK\n=========================");
    printf("Enter name of the book : "); // إدخال اسم الكتاب
    fgets(book.name , MAX_LETTERS , stdin);
}