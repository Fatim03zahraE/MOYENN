#include <stdio.h>
#include <stdlib.h>
#define N 100
int moyenne(int etudiant[N],int compteur)
{
    int i,j;
    int cpt=0;
    for(i=0;i<=compteur;i++)
    {
        printf("\nmoyenne d'etudiant:");
        scanf("%d",&etudiant[i]);
    }
    for(i=0;i<compteur;i++)
    {
        printf("%d\t",etudiant[i]);
    }
    return etudiant;
}
void minmax(int tab[],int n){
    int i;
    int min=tab[0],max=tab[0];
  for(i=0;i<=n;i++)
    {
        if(tab[i]<min)
        {
             min=tab[i];
        }
        if(tab[i]>max)
        {
            max=tab[i];
        }
      }
    printf("\nla note minimal est:%d\n",min);
    printf("\nla note maximal est:%d\n",max);
}
int nbreleve(int t[],int n)
{
    int i;
    int cpt=0;
    for(i=0;i<n;i++)
    {
        if(t[i]>=10)
        {
            cpt++;
        }

    }
    return cpt;
}
int main()
{
  int etud1[13],etud2[15],etud3[28],moy1,moy2,n,j,i;
  printf("premiere class\n");
  moyenne(etud1,13);
  minmax(&etud1,13);
  printf("le nombre des eleves qui ont obtenu une moyenne superieur ou egale10:  %d", nbreleve(etud1,13));
  printf("\n*********************************");
  printf("\ndeuxieme class\n");
  moyenne(&etud2,15);
  minmax(&etud2,15);
  printf("le nombre des eleves qui ont obtenu une moyenne superieur ou egale10:  %d", nbreleve(etud2,15));
  printf("\n\n**********************************************************************\n\n");
  for(i=0;i<3;i++)
  {
      etud3[i]=etud1[i];
  }
  for(i=0,j=3;j<28&&i<15;i++,j++)
  {
      etud3[j]=etud2[i];
  }
  printf(" Le tableau est: ");
  for(i=0;i<28;i++)
  {
    printf("%d",etud3[i]);
  }

    return 0;
}

