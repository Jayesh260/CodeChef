#include <stdio.h>
void reverse(int number)
{
    if (number < 10)
    {
        printf("%d", number);
        return;
    }
    else
    {
        printf("%d", number % 10);

        reverse(number / 10);
    }
}
int main()
{
    int num;
    printf("Enteryour number:");
    scanf("%d", &num);
    printf("Reverse of the input number is:\n ");
    reverse(num);
}