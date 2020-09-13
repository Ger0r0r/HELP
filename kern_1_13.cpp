#include <stdio.h>


const int MaxC = 1000;

int main ()
{
    FILE* stih;
    stih = fopen ("stih.txt", "r");
    int i      = 0,
        k      = 0,
        chg       ,
        Word[MaxC],
        inWord    ;

    for (i = 0; i < MaxC; i++)
        Word[i] = 0;
    while ((i = getc(stih)) != EOF)
    {
        if (((i >= 'A') && (i <= 'Z')) ||
        ((i >= 'a') && (i <= 'z')) ||
        ((i >= 128) && (i <= 175)) ||
        ((i >= 224) && (i <= 241))
        )
        {
             Word[k]++;
             inWord = 1;
        }
        else inWord = 0;

        if (inWord == 0 && chg == 1)
            k++;

        chg = inWord;
    }


    for (i = 0; i < MaxC; i++)
    {
        if (Word[i] != 0)
            printf ("\n");

        while (Word[i] != 0)
        {
        putchar (219);
        Word[i]--;
        }
    }


    return 0;
}
