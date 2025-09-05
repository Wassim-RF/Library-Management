#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <book.h>


//دالة إضافة كتاب
int addBook(book book[MAX_BOOK]) {
    char answer;
    int num , i;
    printf("=========================\n        ADD BOOK\n=========================\n");
    printf("Enter number of book you want to add : ");
    scanf("%d" , &num);
    // إدخال الكتب
    for (i = 0 ; i < num ; i++) {
        printf("Enter name of the book : "); // إدخال اسم الكتاب
        fgets(book[i].name , MAX_LETTERS , stdin);
        book[i].name[strcspn(book[i].name , "\n")] = '\0';

        printf("Enter type of the book :");
        fgets(book[i].type , 64 , stdin);
        book[i].type[strcspn(book[i].type , "\n")] = '\0';

        printf("Enter number of page in the book : ");
        scanf("%d" , &book[i].pages);
        getchar();

        printf("Enter name of writer : ");
        fgets(book[i].writer , 64 , stdin);
        book[i].writer[strcspn(book[i].writer , "\n")] = '\0';

        printf("Enter the date of writing of the book : ");
        fgets(book[i].date , 24 , stdin);
        book[i].date[strcspn(book[i].date , "\n")] = '\0';

        printf("Do you want to creat a description for the book (y for yes and n for no)?\n");
        scanf("%c" , &answer);
        getchar();

        if (answer == 'y') {
            printf("Enter the description of book[i] : ");
            fgets(book[i].description , BOOK_DESCRIPTION , stdin);
            book[i].description[strcspn(book[i].description , "\n")] = '\0';

            printf("The book is succesfule added.");
        } else if (answer == 'n') {
            printf("The book is succesfule added.");
        } else {
            printf("The answer don't existe.");
        }
    }
    book_count++; // إضافة االكتاب 
    return 1;
}

int display_book(book book) {
    int i;
    if (book_count == 0) {
        printf("You don't have any book.");
    } else {
        printf("=========================\n        DISPLAY BOOK\n=========================\n");
        for (i = 0 ; i < book_count ; i++) {
            printf("  %d : %s.\n" , i + 1 , book.name[i]);
        }
    }
    return 1;
}