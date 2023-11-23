#include <stdio.h>
#include <string.h>
void main()
{

    int n, i, j;
    printf("Enter value of n \n");
    scanf("%d", &n);
    char name[n][50];

    printf("Enter. N elements \n");
    for (i = 0; i < n; i++)
    {

        scanf("%s", name[i]);
    }
    // main part sorting happens here
    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)

        {

            if (strcmp(name[j], name[j + 1]) > 0)
            {

                char temp[50];
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    // names display akkan
    for (i = 0; i < n; i++)
    {
        printf("%d", i + 1);
        printf("%s \n", name[i]);
    }
}