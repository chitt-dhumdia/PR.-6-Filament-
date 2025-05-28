#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets(str);  

    for (int i = 0; str[i] != '\0'; i++) 
    {
        int count = 0;
        int repeat = 0;
        char repeatch = str[i];

        for (int j = 0; str[j] != '\0'; j++)
         {
            if (str[i] == str[j])
            {
                count++;
            }
            if (repeatch == str[j] && j<i)
            {
                repeat = 1;
                break;
            }
        }

        if (repeat == 0) 
        {  
            printf("%c => %d\n", str[i], count);
        }
    }

    return 0;
}