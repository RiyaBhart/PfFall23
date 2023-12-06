/* Programmer:Riya Bhart 23k0063
 * Date: 06/12/23
 * Descrption:company management system
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{

    char Name[50];
    char Role[50];
    int Communication;
    int Teamwork;
    int Creativity;

} data;

typedef struct
{

    char depart[50];
    data person[5];

} dept;

int main()
{

    printf("RIYA BHART - 23K0063");

    dept arr[4];
    int x, y;
    int max = -100;
    int sum = 0;
    int best;

    char roles[][15] = {"CEO", "CA", "MANAGER", "INTERN", "EMPLOYEE"};
    int buffer[20] = {-1};
    char depname[][40] = {"HR", "Finance", "Marketing", "PR"};
    char names[][20] = {"riya", "rija", "eshaal", "wania", "afifa", "komal", "jiya", "fizzah", "nitu", "ronit", "safia", "maham", "maha", "areesha", "rayyan", "sabeeh", "mehak", "saba", "wahaj", "zara"};

    for (int i = 0; i < 4; i++)
    {

        strcpy(arr[i].depart, depname[i]);

        for (int j = 0; j < 5; j++)
        {

            do
            {
                x = rand() % 20;

            } while (buffer[x] == -2);

            buffer[x] = -2;

            strcpy(arr[i].person[j].Name, names[x]);
            strcpy(arr[i].person[j].Role, roles[j]);

            y = rand() % 100 + 1;
            arr[i].person[j].Creativity = y;

            y = rand() % 100 + 1;
            arr[i].person[j].Teamwork = y;

            y = rand() % 100 + 1;
            arr[i].person[j].Communication = y;
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            sum = arr[i].person[j].Creativity + arr[i].person[j].Teamwork + arr[i].person[j].Communication;
        }

        printf("Sum for departement %s is %d\n", depname[i], sum);
        if (sum > max)
        {

            max = sum;

            best = i;
        }
    }

    printf("Best departement is: %s\n", depname[best]);
    printf("%*s  | %*s| %13s| %11s| %9s\n", 16, "Employee Name", 16, "Role", "Communication", "Creativity", "Teamwork");
    printf("\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%*s  | %*s| %13d| %11d| %9d\n", 16, arr[best].person[i].Name, 16, arr[best].person[i].Role, arr[best].person[i].Communication, arr[best].person[i].Creativity, arr[best].person[i].Teamwork);
    }
}
