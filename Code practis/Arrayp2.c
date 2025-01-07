#include <stdio.h>
int main()
{
    int array[100],size,i,j,a;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter %d Value of Array : \n",size);

    for (i = 0; i < size; i++)

    {

        scanf(" %d", &array[i]);

    }
    for (i = 0; i < size; ++i)

    {

        for (j = i + 1; j < size; ++j)

        {

            if (array[i] < array[j])

            {

                a = array[i];
            array[i] = array[j];

              array[j] = a;

            }

        }


    }

printf("The numbers arranged in descending order are given below\n");
    for (i = 0; i < size; ++i)
    {
        printf("%d\n",array[i]);
    }

    return 0;

}
