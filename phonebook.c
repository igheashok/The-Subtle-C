#include <stdio.h>
#include <cs50.h>

typedef struct
{
    char *name;
    long number;
}
contact;

int main(void)
{
    int total = get_int("Enter total contacts: ");
    contact contacts[total - 1];

    FILE *file1 = fopen("phonebook.csv", "a");

    for (int i = 0; i < total; i++)
    {
        printf("\n     ~%d~\n", i + 1);
        contacts[i].name = get_string("Enter the name: ");
        contacts[i].number = get_long("Enter the number: ");

        fprintf(file1, "    ~%d~\nName: %s\nNumber: %li\n\n", i + 1, contacts[i].name, contacts[i].number);
    }

    fclose(file1);
}
