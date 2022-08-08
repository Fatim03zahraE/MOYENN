#include <stdio.h>
#include <stdlib.h>
#define N 100
void moyenne(int etudiant[N],int compteur)
{
    int i,j,tmp,cpt=0;
    for(i=0;i<=compteur;i++)
    {
        printf("\nmoyenne d'etudiant:");
        scanf("%d",&etudiant[i]);
    }
    for(i=0;i<compteur;i++)
    {
        printf("%d\t",etudiant[i]);
    }
    for(i=0;i<compteur;i++)
    {
        for(j=i+1;j<compteur;j++)
        {
            if(etudiant[i]>etudiant[j])
                {
                     tmp=etudiant[i];
                    etudiant[i]=etudiant[j];
                    etudiant[j]=tmp;
                }
        }
    }
    printf("\n");
     for(i=0;i<compteur;i++)
    {
        printf("%d\t",etudiant[i]);
    }
    printf("\nla plus petite nombre est:%d",etudiant[0]);
    printf("\nla plus grand nombre est:%d",etudiant[i-1]);
    for(i=0;i<compteur-1;i++)
     {
         if(etudiant[i]>=10)
            cpt++;
     }
     printf("\nle nombre des etudiants a obtenu une moyenne superieur ou Egale10:\n%d",cpt);
}

int main()
{
    int etud[N],moy1,moy2;
    printf("premiere class\n");
   moyenne(etud,13);
   printf("\n*********************************");
 printf("\ndeuxieme class\n");
   moyenne(etud,15);
    return 0;
}
