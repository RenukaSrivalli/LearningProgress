#include <stdio.h>
#include <string.h>

void SetPerson(char a, int b);

int main () {

    char name[50];
    int number[6];

    printf("Enter Name: ");
    scanf("%49s", name);

    printf("Enter Number: ");
    scanf("%5d", number);

    SetPerson(name, number);

    return(0);
}

void SetPerson(char a, int b) {
    printf("Name: %s\n", a);
    printf("Number: %d", b);
}
