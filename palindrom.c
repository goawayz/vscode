#include <stdio.h>
#include <string.h>
void is_palindrome(char t[])

{
    int i = 0;
    int c = 0;
    int l = strlen(t) - 1;
    if (t[0] == t[l])
    {
        while (i < l)
        {
            if (t[i++] == t[l--])

                c++;
        }
        printf(" %s --> est palindrom", t);
    }

    else
        printf("%s --> non palindrom", t);
}
int main()
{
    char x[20];
    printf("String : ");
    scanf("%s", &x);
    is_palindrome(x);

    return 0;
}