#include <stdio.h>
#include <string.h>
void concatenate(char x[], char y[])
{
    char name[50];
    printf("1st string : \n");
    scanf("%s", &name);
    int l1 = strlen(name);

    char prenom[50];
    printf("2nd string : \n");
    scanf("%s", &prenom);
    int l2 = strlen(prenom);

    char all[l1 + l2];
    int i = 0;
    while (name[i] != '\0')
    {
        all[i] = name[i];
        i++;
    }
    int k = i; //indice de l'etat de name;
    i = 0;
    while (prenom[i] != '\0')
    {
        all[k] = prenom[i];
        i++;
        k++;
    }
    printf("\n la concatenate :");
    int t = 0;
    t = l1 + l2;
    for (int i = 0; i < t; i++)
    {
        printf("%c", all[i]);
    }
}
int main()
{
    char z[20], u[20];
    concatenate(z, u);
    return 0;
}