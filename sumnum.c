#include <stdio.h>
int main()
{
    int n1, n2, SumOne;

    printf("Enter two integers: ");

    // two integers entered by user are stored using scanf()
    scanf("%d %d", &n1, &n2);

    // store sum in variable Sum
    SumOne = n1 + n2;

    // display output
    printf("%d + %d = %d", n1, n2, SumOne);

    // check if the sum is even or odd,
    // and print result to screen
    if(SumOne % 2 == 0) printf("%d is even\n", SumOne);
    else printf("%d is odd\n", SumOne);

    return 0;
}
