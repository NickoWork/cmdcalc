#ifndef COMPUTING_H //check
#define COMPUTING_H //check

void delete_space(char *);                           //удаление пробелов из строки
void check_brackets(char *);                         //определяет правильность введённой скобочной структуры
float calculation(char *);                                //получение результата
float second_priority(char *, int *);          //сложение "+" вычитание "-"            
float first_priority(char *, int *);             //умножение "*" деление "/"
float brackets_priority(char *, int *);   //приоритет для скобок
float digit(char *, int *);             //получение числа из строки

#endif  

