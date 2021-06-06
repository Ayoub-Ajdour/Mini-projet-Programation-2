#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct date{
	int j;
	int m;
	int a;
}date;

typedef struct voiture{
	int idVoiture;
	char marque[15];
	char nomVoiture[15];
	char couleur[7];
	int nbplaces;
	int prixJour;
	char Enlocation[4];
}voiture ;
typedef struct contrat{
	float numContrat;
	int idVoiture;
	int idclient;
	date debut;
	date fin;
	int cout;

} contrat;
typedef struct client{
	int idclient;
	char nom[20];
	char prenom[20];
	int cin;
	char adresse[15];
	int telephone;
} client;
main()
{

 Menuprincipal();

 int k;
 scanf("%d",&k);


 switch(k){
 	case 1:
 		locationvoitures();
 		break;
 	case 2:
	 Gestionvoitures();

	 break;
	 case 3:
	 	Gestionclients();
	 	break;
	 	case 4:
	 		return 0;
	 		break;
	 default :
	 printf("il faut ecrire 1jusqua 4");
 }
}
    ///-------------------------------------------------- Menu PrincipaL --------------------------------------------------------------------------------------------------
int Menuprincipal()
{
    int choix;
        printf("\n                                                             \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n                                                             \xba                                                      \xba");
    printf("\n                                                             \xba                    Mini Projet                       \xba");
    printf("\n                                                             \xba         Programmation et Structure des données       \xba");
    printf("\n                                                             \xba             Ayoub Ajdour && Rachid Ait Lakit         \xba");
    printf("\n                                                             \xba                         SMI4                         \xba");
    printf("\n                                                             \xba                                                      \xba");
    printf("\n                                                             \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                               \xb3   Menu Principal    \xb3");
	printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    Location........................................1   \xba");
    printf("\n               \xba    Gestion voiture.................................2   \xba");
    printf("\n               \xba    Gestion client..................................3   \xba");
    printf("\n               \xba    Quitter.........................................4   \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");




}
   /// ---------------------------------------------------  Location  --------------------------------------------------------------------------------------

int locationvoitures()
{
    int choix;

	printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                               \xb3 Location d une voiture \xb3");
	printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba   Visualiser Contrat..............................1    \xba");
    printf("\n               \xba   Louer voiture...................................2    \xba");
    printf("\n               \xba   Retourner voiture................................3   \xba");
    printf("\n               \xba   Modifier contrat.................................4   \xba");
    printf("\n               \xba   Supprimer contrat................................5   \xba");
    printf("\n               \xba   retour...........................................6   \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");



	}





/// --------------------------------------------- 3 - Les gestions de voitures ------------------------------------------------------------------------------------
int Gestionvoitures()
{
    int k;

	printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                               \xb3 Gestion des voitures \xb3");
    printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    liste des voiture..............................1    \xba");
    printf("\n               \xba    Ajoute voiture.................................2    \xba");
    printf("\n               \xba    Modifier voiture...............................3    \xba");
    printf("\n               \xba    Supprimer voiture..............................4    \xba");
    printf("\n               \xba    Retour.........................................5    \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&k);
    switch(k){
    case 1: ListeVoiture();break;
    case 2: Ajout_Du_Voiture();break;
   // case 3: ModifierVoiture();break;
    case 4: SupprimerVoiture();break;
    case 5 :Menuprincipal();break;
	default : puts("erreur");

	}
}
void ListeVoiture(){
                 /// Si on élimine le fichier qui contient les noms des voitutres
 /*

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    mersedess..............................1            \xba");
    printf("\n               \xba    toyota.................................2            \xba");
    printf("\n               \xba    dacia..................................3            \xba");
    printf("\n               \xba    nissan.................................4            \xba");
    printf("\n               \xba    aghyol.................................5            \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
*/
FILE *fvoiture=NULL;
fvoiture=fopen("fichier3.txt","r");
if(fvoiture == NULL)
{
printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    EROOR dans le chemin de fichier                   : \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
    else
    {
printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");

        char c;
        do{
            c=fgetc(fvoiture);
    printf("\n               \xba                   %c                                     \xba",c);
        }while(c!=EOF);
            printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

    }
    fclose(fvoiture);

}


void Ajout_Du_Voiture()
{
    FILE *fvoiture;
    char ch[100];
    fvoiture=fopen("fichier3.txt","a");
    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba   Ecrire le nom de voiture que vous voulez l'ajoute  : \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    scanf("%s",ch);
    fprintf(fvoiture,"\n");
    fputs(ch,fvoiture);
     printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba   %s a ajouter a notre liste                          \xba",ch);
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
fclose(fvoiture);
}
 int SupprimerVoiture()
 {
int sup;
 FILE *fvoiture=fopen("fichier3.txt","r");
 FILE *test=fopen("test.txt","a");
  voiture v;
    if(fvoiture==NULL)
  {
    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    EROOR dans le chemin de fichier                   : \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

  }
  else
  {
    printf("donnez le idVoiture pour le supprimer:");
          scanf("%d",&sup);
          while(fscanf(fvoiture,"%d %s %s %s %d %d %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbplaces,&v.prixJour,&v.Enlocation)!=EOF){
              if(v.idVoiture!=sup){
                fprintf(test,"%d %s %s %s %d %d %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbplaces,&v.prixJour,&v.Enlocation);
 }
          }
  }
  fclose(test);
     fclose(fvoiture);
  remove("fichier3.txt");
   rename("test.txt","fichier3.txt");
   }

/// --------------------------------------------- 3 - Les gestions de Clients ------------------------------------------------------------------------------------

int Gestionclients()

{
    int k;

	printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                               \xb3 Gestion des Clients \xb3");
	printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    Liste des Clients..............................1    \xba");
    printf("\n               \xba    Ajouter Client.................................2    \xba");
    printf("\n               \xba    Modifier Client................................3    \xba");
    printf("\n               \xba    Supprimer Client...............................4    \xba");
    printf("\n               \xba    Retour.........................................5    \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&k);
    switch(k){
    	case 1:ListeClient();
    		break;
        case 2:Ajout_Du_Client();
    		break;
     	case 3:ModifierClient();
    		break;
        case 4:supprimerclient();
    		break;
     	case 5:Menuprincipal();
    		break;


    		default:
    			puts("erreure");
	}

}


int ListeClient(){


		printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                               \xb3 listes Clients   \xb3");
	printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");
// Si on élemine le fichier qui contient les noms de clients
/*
    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    Ayoub Ajdour..............................1         \xba");
    printf("\n               \xba    Rachid Ait Lakit.................................2  \xba");
    printf("\n               \xba    flan ben flan 1 ..................................3     \xba");
    printf("\n               \xba    flan ben flan 2.........................................4     \xba");
    printf("\n               \xba    flan ben flan 3....................................5    \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

*/

  FILE *q=fopen("fichier2.txt","r");
 char x;
  if(q==NULL){
printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xba    EROOR dans le chemin de fichier                   : \xba");
    printf("\n               \xba                                                        \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
  }else{
    while((x=fgetc(q))!=EOF){
        printf("%c",x);
    }
  }
   fclose(q);
}
int Ajout_Du_Client()
{
FILE *liste=fopen("fichier2.txt","a");
    client p;
    int i,n;
    printf("le nombre de clien ajoute:");
      scanf("%d",&n);
      for(i=0;i<n;i++){
       printf("Donnez le IDClient:");
       scanf("%d",&p.idclient);
       printf("Donnez le Nom:");
       scanf("%s",&p.nom);
       printf("Donnez le Prenom:");
       scanf("%s",&p.prenom);
        printf("Donnez le cin:");
       scanf("%d",&p.cin);
        printf("Donnez L adresse:");
       scanf("%s",&p.adresse);
        printf("Donnez le telephone:");
       scanf("%d",&p.telephone);
       printf("***************");
      fprintf(liste,"%d %s %s %d %s %d\n",p.idclient,&p.nom,&p.prenom,p.cin,&p.adresse,p.telephone);}
  fclose(liste);
}
int ModifierClient()
{
    FILE *q=fopen("fichier2.txt","r");
 FILE *tmp=fopen("tmpi.txt","a");
 client x,k,b;
 int modif;
  if(q==NULL){
    printf("erreur");
  }else{
    printf("donnez le idClient pour modifie :");
          scanf("%d",&modif);
          while(fscanf(q,"%d %s %s %d %s %d\n",&k.idclient,&k.nom,&k.prenom,&k.cin,&k.adresse,&k.telephone)!=EOF){
              //  printf("%s\n",k.nom);
              if(k.idclient!=modif){
                    printf("les informations de client est:\n");
              printf("le id :%d \t le nom:%s \t le prenom:%s \t le Cin:%d \t adresse:%s \t telephone:%d \t\n",k.idclient,k.nom,k.prenom,k.cin,k.adresse,k.telephone);
          printf("\ntap les nouvelles informations\n");
    printf("Donnez le ID:");
       scanf("%d",&b.idclient);
       printf("Donnez le Nom:");
       scanf("%s",&b.nom);
       printf("Donnez le Prenom:");
       scanf("%s",&b.prenom);
        printf("Donnez le cin:");
       scanf("%d",&b.cin);
        printf("Donnez L adresse:");
       scanf("%s",&b.adresse);
        printf("Donnez le telephone:");
       scanf("%d",&b.telephone);
            fprintf(tmp,"%d %s %s %d %s %d\n",b.idclient,&b.nom,&b.prenom,b.cin,&b.adresse,b.telephone);

              }else{
               fprintf(tmp,"%d %s %s %d %s %d\n",k.idclient,&k.nom,&k.prenom,k.cin,&k.adresse,k.telephone);

              }
          }
  }
     fclose(tmp);
     fclose(q);
  remove("fichier2.txt");
   rename("tmpi.txt","fichier2.txt");
}
int supprimerclient()
{
    int sup;
 FILE *q=fopen("fichier2.txt","r");
 FILE *tmp=fopen("tmpi.txt","a");
  client k;
    if(q==NULL){
    printf("erreur");
  }else{
    printf("donnez le idClient pour ssupprimer:");
          scanf("%d",&sup);
          while(fscanf(q,"%d %s %s %d %s %d\n",&k.idclient,&k.nom,&k.prenom,&k.cin,&k.adresse,&k.telephone)!=EOF){
              //  printf("%s\n",k.nom);
              if(k.idclient!=sup){
                fprintf(tmp,"%d %s %s %d %s %d\n",k.idclient,&k.nom,&k.prenom,k.cin,&k.adresse,k.telephone);
 }
          }
  }
  fclose(tmp);
     fclose(q);
  remove("s.txt");
   rename("tmpi.txt","s.txt");
}

void locationvoiture(void)
{      FILE *fcontrat,*fvoiture,*fclient;
        struct contrat tmp;
        struct voiture v,voitures[1000];
        struct client c;
        int i,j,idv,idc,duree,prix,trouve,ids[1000];
         printf("\n donner l'id du client: ");
         scanf("%d",&idc);
        fclient=fopen("fin kayn lfichier des clients","r");
          if(fclient==NULL)
            {
             printf("Error!");
             return;
           }
        while(!feof(fclient) && !trouve)
          {
        fscanf(fclient,"%d %20s %20s %d %15s %d",&c.idclient,c.nom,c.prenom,&c.cin,c.adresse,&c.telephone);
           if(c.idclient==idc)
                trouve=1;
       }
       fclose(fclient);
            if(!trouve)
                 {
        printf("\n %d n'appartient à aucun client veillez l'ajouter via menu des clients ",idc);
           return;
              }
       fvoiture=fopen("fin kayn lfichier des voitures","r");
          if(fvoiture==NULL)
            {
             printf("Error!");
             return;
           }
        i=0;
       while(!feof(fvoiture))
           {
         if(fscanf(fvoiture,"%d %15s %15s %7s %d %d %3s",&v.idVoiture,v.marque,v.nomVoiture,v.couleur,&v.nbplaces,&v.prixJour,v.Enlocation) && strcmp(v.Enlocation,"Non"))
                 {
               printf("\n%d %s %s %s %d %d %s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.Enlocation);
                 ids[i++];
                 }
      }
       fclose(fvoiture);
   trouve=0;
   do
    { printf("\n Choisir une voiture parmi les voitures affichées ci-dessus et donner son id: ");
     scanf("%d",&idv);
          for(j=0;j<i;j++)
               if(idv==ids[j])
                 {
                  trouve=1;
                  break;
                   }
     }while(!trouve);
   printf("\n Donner un numéro de contrat unique ");
   scanf("%f",&tmp.numContrat);
    printf("\n Donner la durée de location (nombre de jours): ");
     scanf("%d",&duree);
     printf("\n Donner la date de début ");
     printf("\nJour: ");
   scanf("%d",&tmp.debut.j);
   printf("\nMois: ");
   scanf("%d",&tmp.debut.m);
   printf("\nAnnée: ");
   scanf("%d",&tmp.debut.a);
   printf("\n Donner le prix par jour du voiture choisie ");
   scanf("%d",&prix);
    tmp.cout=duree*prix;
      tmp.fin.a=tmp.debut.a+duree/366;
       duree=duree%366;
      tmp.fin.m=tmp.debut.m+duree/30;
      tmp.fin.j=tmp.debut.j+duree%30;
   fvoiture=fopen("blast fichier","r");
      if(fvoiture==NULL)
       {
       printf("\n Error!");
       return;
       }
       i=-1;
     while(!feof(fvoiture))
      {
        i++;
        fscanf(fvoiture,"%d %14s %14s %6s %d %d %3s",&voitures[i].idVoiture,voitures[i].marque,voitures[i].nomVoiture,voitures[i].couleur,&voitures[i].nbplaces,&voitures[i].prixJour,voitures[i].Enlocation);
        if(idv==voitures[i].idVoiture)
         strcpy(voitures[i].Enlocation,"Oui");
 }
   fclose(fvoiture);
      fvoiture=fopen("blast lfichier","w");
      if(fvoiture==NULL)
       {
       printf("\n Error !");
       return;
       }
    for(j=0;j<i;j++)
      fprintf(fvoiture,"%d %14s %14s %6s %d %d %3s\n",voitures[j].idVoiture,voitures[j].marque,voitures[j].nomVoiture,voitures[j].couleur,voitures[j].nbplaces,voitures[j].prixJour,voitures[j].Enlocation);
    fclose(fvoiture);

     fcontrat=fopen("blast lfichier dyal les contrats","a");
          if(fcontrat==NULL)
       {
       printf("\n Error !");
       return;
       }
      fprintf(fcontrat,"%f %d %d %d %d %d %d %d %d %d\n",tmp.numContrat,idv,idc,tmp.debut.j,tmp.debut.m,tmp.debut.a,tmp.fin.j,tmp.fin.m,tmp.fin.a,tmp.cout);
     fclose(fcontrat);
}

void visualisercontrat(void)
{
    FILE *co;
    contrat tmp;
    float num;
    printf("\n\n Donner le numéro du contrat à  visualiser :");
    scanf("%f",&num);
     co=fopen("fichier1.txt","r");
       if(co==NULL)
          {
        fprintf(stderr,"\n\nErreure lors de l'ouverture du fichier\n");
       //hna dir exit ola return olla l'appel l menu
        }
    while(!feof(co))
     {
       fscanf(co,"%f %d %d %d %d %d %d %d %d %d",&tmp.numContrat,&tmp.idVoiture,&tmp.idclient,&tmp.debut.j,&tmp.debut.m,&tmp.debut.a,&tmp.fin.j,&tmp.fin.m,&tmp.fin.a,&tmp.cout);
       if(tmp.numContrat==num)
        {
     printf("\n\nLes informations du contrat num: %f sont :\n",tmp.numContrat);
     printf("\nId du voiture : %d",tmp.idVoiture);
     printf("\nId du client : %d",tmp.idclient);
     printf("\nDate de début : %d/%d/%d",tmp.debut.j,tmp.debut.m,tmp.debut.a);
     printf("\nDate de début : %d/%d/%d",tmp.fin.j,tmp.fin.m,tmp.fin.a);
     printf("\nCout : %d",tmp.cout);
       break;
        }
     }
}

void retournervoiture(void)
{
       float num;
       FILE *co,*v;
       contrat tmp;
       voiture tab[1000];
       int i,j,id;
       printf("\n\n Donner le numéro du contrat ");
       scanf("%f",&num);
       co=fopen("fichier1.txt","r");
      if(co==NULL)
       {
       printf("\n Erreur lors de l'ouverture ");
       //exit olla return ...
       }
   while(!feof(co))
      {
        fscanf(co,"%f %d %d %d %d %d %d %d %d %d",&tmp.numContrat,&tmp.idVoiture,&tmp.idclient,&tmp.debut.j,&tmp.debut.m,&tmp.debut.a,&tmp.fin.j,&tmp.fin.m,&tmp.fin.a,&tmp.cout);
         if(tmp.numContrat==num)
           {
           id=tmp.idVoiture;
           break;
           }
       }
   fclose(co);
   i=0;
  v=fopen("fichier2.txt","r"); //fichier voiture
      if(v==NULL)
       {
       fprintf(stderr,"\n Erreur lors de l'ouverture ");
      //...
 }
     while(!feof(v))
      {
        fscanf(v,"%d %14s %14s %6s %d %d %3s",&tab[i].idVoiture,tab[i].marque,tab[i].nomVoiture,tab[i].couleur,&tab[i].nbplaces,&tab[i].prixJour,tab[i].Enlocation);
          if(id==tab[i].idVoiture)
           strcpy(tab[i].Enlocation,"Non");
           i++;
    }
   fclose(v);
      v=fopen("fichier2.txt","w");
      if(v==NULL)
       {
       fprintf(stderr,"\n Erreur lors de l'ouverture ");
       }
    for(j=0;j<i;j++)
      fprintf(v,"%d %14s %14s %6s %d %d %3s\n",tab[j].idVoiture,tab[j].marque,tab[j].nomVoiture,tab[j].couleur,tab[j].nbplaces,tab[j].prixJour,tab[j].Enlocation);
    fclose(v);
       supprimercontrat(num);
}
void modifiercontrat(void)
{
   FILE *co;
   float num;
   int i,j;
   contrat tab[1000];
   printf("\n\nDonner le numéro du contrat à modifier: ");
   scanf("%f",&num);

     co=fopen("fichier3.txt","r"); //fichier de contrat
         if(co==NULL)
            {
              fprintf(stderr,"\nErreure lors de l'ouverture");
            //...
            }
            i=0;
        while(!feof(co))
          {
              fscanf(co,"%f %d %d %d %d %d %d %d %d %d",&tab[i].numContrat,&tab[i].idVoiture,&tab[i].idclient,&tab[i].debut.j,&tab[i].debut.m,&tab[i].debut.a,&tab[i].fin.j,&tab[i].fin.m,&tab[i].fin.a,&tab[i].cout);
              if(tab[i].numContrat==num)
                {
                          printf("\nDonner la nouvelle date de retour : \n");
                          printf("\nJour :");
                          scanf("%d",&tab[i].fin.j);
                          printf("\nMoix :");
                          scanf("%d",&tab[i].fin.m);
                          printf("\nAnnée :");
                          scanf("%d",&tab[i].fin.a);
                          printf("\Donner le nouveau cout: ");
                          scanf("%d",tab[i].cout);
              }
           i++;
      }
        fclose(co);
        co=fopen("fichier3.txt","w");
         if(co==NULL)
            {
              fprintf(stderr,"\nErreure lors de l'ouverture, ");
           //...
    }
            j=0;
        while(j<i)
            {
         fprintf(co,"%f %d %d %d %d %d %d %d %d %d\n",tab[j].numContrat,tab[j].idVoiture,tab[j].idclient,tab[j].debut.j,tab[j].debut.m,tab[j].debut.a,tab[j].fin.j,tab[j].fin.m,tab[j].fin.a,tab[j].cout);
            j++;
            }
     fclose(co);
}
void supprimercontrat(float num)
{
   FILE *co;
   int i=0,j;
   contrat tab[1000];
     co=fopen("fichier3.txt","r");
         if(co==NULL)
            {
              fprintf(stderr,"\nErreure lors de l'ouverture,");
         //...
            }
        while(!feof(co))
          {
             fscanf(co,"%f %d %d %d %d %d %d %d %d %d",&tab[i].numContrat,&tab[i].idVoiture,&tab[i].idclient,&tab[i].debut.j,&tab[i].debut.m,&tab[i].debut.a,&tab[i].fin.j,&tab[i].fin.m,&tab[i].fin.a,&tab[i].cout);
              if(tab[i].numContrat==num)
                i--;
              i++;
            }
        fclose(co);
        co=fopen("fichier3.txt","w");
         if(co==NULL)
            {
              fprintf(stderr,"\nErreure lors de l'ouverture,");
          //....
            }
            j=0;
        while(j<i)
            {
         fprintf(co,"%f %d %d %d %d %d %d %d %d %d\n",tab[j].numContrat,tab[j].idVoiture,tab[j].idclient,tab[j].debut.j,tab[j].debut.m,tab[j].debut.a,tab[j].fin.j,tab[j].fin.m,tab[j].fin.a,tab[j].cout);
            j++;
            }
     fclose(co);
}

