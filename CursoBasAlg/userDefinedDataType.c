#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct client
{
    char name[50];
    char id[10];
    float credit;
    char address[100];
};

struct animal
{
    char specie[10];
    char name[10];
    char domestic[3];
    float maintenance;

};


int main(int argc, char const *argv[])
{
    struct client panchito = {0};
    strcpy(panchito.name, "Panchito López");
    strcpy(panchito.id, "0000000001");
    panchito.credit = 1000000.0;
    strcpy(panchito.address, "En la casa de don Panchito");

    printf("The client's name is: %s \n",panchito.name);
    printf("The client's id is: %s \n",panchito.id);
    printf("The client's credit is: %.3f \n",panchito.credit);
    printf("The client's address is: %s \n",panchito.address);

    struct animal Susi = {0};
    strcpy(Susi.name,"Susi");
    strcpy(Susi.specie,"Perro");
    strcpy(Susi.domestic,"yes");
    Susi.maintenance=1000;

    printf("El amimal en cuestión es: %s\n",Susi.specie);
    printf("Su nombre es: %s\n",Susi.name);
    printf("Es doméstico?: %s\n",Susi.domestic);
    printf("Y cuesta mensualmente: %.2f\n",Susi.maintenance);

    return 0;
}
