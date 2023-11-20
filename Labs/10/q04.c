/*
 * Programmer: Riya Bhart
 * Date: 19/11/23
 * Description: Develop a C program that takes a sentence as input and uses pointer arithmetic to reverse each word in the sentence while keeping the words in their original order. Print the modified sentence.
 */
 #include <stdio.h>
#include <string.h>


void reverseWord(char *start, char *end) {
    char temp;

    while (start < end) {
       
        temp = *start;
        *start = *end;
        *end = temp;

        
        start++;
        end--;
    }
}


void reverseWords(char *sentence) {
    char *start = sentence;
    char *end = sentence;

    while (*end != '\0') {
        
        while (*end != ' ' && *end != '\0') {
            end++;
        }

        
        reverseWord(start, end - 1);

        if (*end != '\0') {
            start = ++end;
        }
    }
}

int main() {
    
    char sentence[100];


    printf("Enter a sentence: \n");
    fgets(sentence, sizeof(sentence), stdin);

    
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    
    reverseWords(sentence);

    
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
