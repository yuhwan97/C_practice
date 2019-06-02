typedef struct {
    char name[10];
    char num[13];
    }Book;


void regist(Book *book);
void all_print(Book book[], int *i);
void personal_print(Book book[], int i);


