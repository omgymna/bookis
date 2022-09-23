//c program finding number of words/vowels.and length
//Jimena Romo Cuevas - CSCE 2610
#include <stdio.h>

int main()
{
    char sentence[255]; //character array of no more than 255 characters 
    int vowels, length, words;
    vowels = 0;
    length = 0;
    words = 1;

    //geting line of string input
    printf("Enter sentence: ");
    fgets(sentence,sizeof(sentence), stdin);

    while(sentence[length]!='\0')
    {
        if(sentence[length]==' ')
        {
            words++;
        }
        if(sentence[length]=='a'||sentence[length]=='e'||sentence[length]=='i'||sentence[length]=='o'||sentence[length]=='u'||sentence[length]=='A'||sentence[length]=='E'||sentence[length]=='I'||sentence[length]=='O'||sentence[length]=='U')
        {
            vowels++;
        }

        length++;
    }

    printf("Number of words: %d", words);
    printf("\nNumber of vowels: %d", vowels);
    printf("\nLength of sentence: %d\n", length);

    return 0;
}