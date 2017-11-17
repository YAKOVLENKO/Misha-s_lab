#include<stdio.h>
#include<stdlib.h>

void fibarray(int *fib, int len)
{
    if (len < 3)
    {
        printf("Error! Length must be > 2!");
    }
    else
    {
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i < len; ++i)
        {
                fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
}

void printarray(int *x, int len)
{
    int count = 0;
    while (count < len)
    {
        int i = *x;
        printf("%d ", i);
        x += 1;
        ++count;
    }
    printf("\n");
}

int search_i(int *x, int len, int number)
{
    for (int i = 0; i < len; ++i)
    {
        if (x[i] == number)
            return i;
    }
    return -1;
}

int search_r(int *x, int len, int number)
{
    if (*(x + len - 1) == number)
        return len - 1;
    //int a = *x + len - 1;
    if (len - 1 != 0)
        return search_r(x, len - 1, number);
    else return -1;
}

const char *strchar(const char *src, char ch)
{
    while (*src != '\0')
    {
        if (*src == ch)
            return src;
        else src += 1;
    }
    return NULL;
}


int main(void) {
    // Работа с цифровыми массивами:

    int *mass;
    int size = 0, search_num;
    while (size <= 2)
    {
        printf("\nWrite the size of your mass: ");
        scanf("%d", &size);
        mass = (int *)malloc(size * sizeof(int));
        fibarray(mass, size);
    }

    printf("Your mass:");
    printarray(mass, size);

    printf("Write number you want to find (recursive):");
    scanf("%d", &search_num);
    search_num = search_r(mass, size, search_num);
    printf("Position of this number: %d\n", search_num);

    printf("Write number you want to find (iterative):");
    scanf("%d", &search_num);
    search_num = search_i(mass, size, search_num);
    printf("Position of this number: %d\n", search_num);

    // Работа со строками

    char *ch_mass;
    int ch_size = 0;
    char search_ch;

    printf("Write size of mass: ");
    scanf("%d", &ch_size);
    ch_mass = (char *)malloc((ch_size + 1) * sizeof(char));

    printf("Your string: ");
    for (int i = 0; i < ch_size; ++i) {
        scanf("%c", &ch_mass[i]);
    }
    ch_mass[ch_size] = '\0';


    printf("The symbol you wanna find: ");
    scanf("%c", &search_ch);

    const char *s = strchar(ch_mass, search_ch);
    if (s == NULL)
        printf("There is no such letter in your string!");
    else
        printf("This letter is in your string!");
    
    
    
    free(mass);
    free(ch_mass);

    return 0;
}


