/*programmer: Riya Bhart
  Desc: searching from string and count;
  date: 21/10/23
  */
#include <stdio.h>
#include <string.h>
int main(){
    char search;
    char text[1000];
    int count;
    
    printf("enter text: ");
    gets(text);// scans the text
    
    printf("enter character to be searched: ");
    scanf("%c", &search);// scans the character to be searched
    
    for (int i = 0; text[i] != '\0'; i++)//checking character in array
    {
        if (text[i] == search)//if the character is present
        {
            count++; // increase count by 1
        }
    }

    
    printf("the character %c is present %d times in the given text.", search , count);// printing the answer
    return 0;
}
