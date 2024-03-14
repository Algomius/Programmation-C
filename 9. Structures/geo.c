#include <cstdio>

enum cardinaux {Nord, Sud, Est, Ouest};

struct geo {
    char nom[200];
    double longitude;
    char longitudeSens;
    double latitude;
    char latitudeSens;
};

struct geo lecture()
{
    struct geo g;

    printf("Donnez le nom du point : \n");
    scanf("%s", &g.nom);
    printf("Donnez la longitude du point : \n");
    scanf("%lf", &g.longitude);
    printf("Donnez le sens de la longitude : \n");
    scanf(" %c", &g.longitudeSens);
    printf("Donnez la latitude du point : \n");
    scanf("%lf", &g.latitude);
    printf("Donnez le sens de la latitude : \n");
    scanf(" %c", &g.latitudeSens);

    return g;
}

void correctionNomAdresse(struct geo *g)
{
    printf("Donnez le nouveau nom du point : \n");
    scanf("%s", &g->nom); 
}


void affichage(struct geo g)
{
    printf("%s - ( %lf %c - %lf %c)\n", g.nom, g.longitude, g.longitudeSens, g.latitude, g.latitudeSens);
}


int main()
{


    struct geo paris, madrid, londres;

    scanf("%s %lf %c %lf %c", &madrid.nom, &madrid.longitude, &madrid.longitudeSens, &madrid.latitude, &madrid.latitudeSens);
    affichage(madrid);

    printf("String : %d\n", sizeof(char[200]));
    printf("Double : %d\n", sizeof(double));
    printf("Char : %d\n", sizeof(char));
    printf("Struct : %d\n", sizeof(struct geo)); 

    paris = lecture();
    //madrid = lecture();

    affichage(paris);
    //affichage(madrid);

    struct geo *p = &paris;

    printf("%s - %lf\n", (*p).nom, p->longitude);

    correctionNomAdresse(&paris);
    affichage(paris);

    enum cardinaux c1 = Nord;
    enum cardinaux c2 = c1;

    printf("%d - %d\n", c1, c2);

}