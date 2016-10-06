#include <stdio.h>

int main()
{
    int a[5] = {10, 5, 6, 22, 30};// in stock item
    int b;// key
    int i;//loop
    int found = 0;// 0 = false/ 1 = true
    printf("Type the number you want to know is in stock.\n");
    scanf(" %d", &b);
   //This is where the program will compare each item.
   for (i=0; i<5; i++)
    {
        if (b == a[i])
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("\n**Item Found**");
    }
    else
    {
        printf("\n**Item Not found**");
        
    }
    

return 0;
}

