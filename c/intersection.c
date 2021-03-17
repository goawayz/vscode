#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, cp = 0;
    printf("donner la dimmension du premier tableau\n");
    scanf("%d", &n);
    printf("donner la dimmension du deuxieme tableau\n ");
    scanf("%d", &m);
    int tab1[100], tab2[100], tab3[100];
    int i, j, k, l, s, r = 0;
    printf("Remplissage des deux tableaux\n");
    for (i = 0; i < n; i++)
    {
        printf("donner l'element %d du tableau1\n", i + 1);
        scanf("%d", &tab1[i]);
    }
    for (j = 0; j < m; j++)
    {
        printf("donner l'element %d du tableau2\n", j + 1);
        scanf("%d", &tab2[j]);
    }
    k = 0;
    //trouve l'element
    printf("entrer l'élément tu veut trouver :");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (tab1[i] == key || tab2[i] == key)
            printf("élément trouver ! sa position est ");
    }
    //l'intersection
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (tab1[i] == tab2[j])
            {
                tab3[k] = tab2[j];
                k++;
            }
            else
                cp++;
        }
    }

    printf("Affichage du tableau intersection\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\n", tab3[i]);
    }
    return 0;
}