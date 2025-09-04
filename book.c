#include <stdio.h>
#include <string.h>
#include <book.h>


//دالة إضافة كتاب
int addBook(book book) {
    char filename[50];
    printf("=========================\n        ADD BOOK\n=========================");
    printf("Enter name of the book : "); // إدخال اسم الكتاب
    fgets(book.name , MAX_LETTERS , stdin);
    book.name[strcspn(book.name , "\n")] = '\0';
    sprintf(filename , "%s.dat" , book.name); // إنشاء ملف باسم الكتاب لنخزن فيه معلومات الكتاب
    FILE *book = fopen(filename , "wb"); // فتح الملف
}