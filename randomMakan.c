#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

int Randoms(int lower, int upper) 
{
    int num = (rand() % (upper + 1 - lower )) + lower; 
    return num; 
} 

int main()
{
    int lower = 0, i = 0, random;
    char n;
    char *makan[] = 
    {
        "Nasgor depan bengkel", 
        "Maba", 
        "Geprek Sepuasnya", 
        "Ayam 15k",
        "Soup depan",
        "Rocket",
        "Masak saja",
        "Mekdi",
        "Piza hat",
        "berger king",
        "Kaefsi",
        "siefsi",
        "Nasi Uduk"
    };

    int count=sizeof(makan)/sizeof(makan[0]);
    int upper = count;
    printf("\n\n\t\t\t\t\t\tHari ini makan :");
    srand(time(NULL));
    random = Randoms(lower, upper);
    printf("\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
    printf("\t\t\t\t\t\t== %s ==", makan[random]);
    printf("\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    getch();

}
