

    #include<stdio.h>

    #include<stdlib.h>

    #include<string.h>

    struct etudiant{

           char nom[20];

           char prenom[20];

           int note;

           };

    int main()

    {

        struct etudiant t[5];

        int n,i;

        printf("Donner le nombre d'etudiants:\n");

        scanf("%d",&n);

        for(i=0;i<n;i++)

        {

           printf("donnez le nom, prenom et la note de l'etudiant %d:\n",i+1);

           scanf("%s%s%d",t[i].nom,t[i].prenom,&t[i].note);

        }

        for(i=0;i<n;i++)

        {

            if(t[i].note>=10)

            printf("%s %s\n",t[i].nom,t[i].prenom);

        }

        system("pause");

        return 0;

    }


