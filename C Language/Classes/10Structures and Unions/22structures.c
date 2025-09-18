#include <stdio.h>
#include <string.h>
struct Student
{
    int marks;
    char fav_char;
    int id;
    char name[34];

} harry, ravi, subham;
// struct Student harry, ravi, subham;

void print()
{
    printf("%s", harry.name);
    printf("%s", ravi.name);
    printf("%s", subham.name);
    printf("%d", harry.marks);
    printf("%d", ravi.marks);
    printf("%d", subham.marks);
    printf("%d", harry.id);
    printf("%d", ravi.id);
    printf("%d", subham.id);
    printf("%c", harry.fav_char);
    printf("%c", ravi.fav_char);
    printf("%c", subham.fav_char);
}
int main()
{
    harry.id = 1;
    ravi.id = 2;
    subham.id = 3;
    harry.marks = 100;
    ravi.marks = 90;
    subham.marks = 80;
    harry.fav_char = 'H';
    ravi.fav_char = 'R';
    subham.fav_char = 'S';
    strcpy(harry.name, "Harry is a coder.");
    strcpy(ravi.name, "Ravi is a singer.");
    strcpy(subham.name, "Subham is an athelete.");
    printf("The name of the first student is: %s\n", harry.name);
    printf("The name of the second student is: %s\n", ravi.name);
    printf("The name of the third student is: %s\n", subham.name);
    printf("The marks of the first student is: %d\n", harry.marks);
    printf("The marks of the second student is: %d\n", ravi.marks);
    printf("The marks of the third student is: %d\n", subham.marks);
    printf("The id of the first student is: %d\n", harry.id);
    printf("The id of the second student is: %d\n", ravi.id);
    printf("The id of the third student is: %d\n", subham.id);
    printf("The favourite character of the first student is: %c\n", harry.fav_char);
    printf("The favourite character of the second student is: %c\n", ravi.fav_char);
    printf("The favourite character of the third student is: %c\n", subham.fav_char);
    return 0;
}