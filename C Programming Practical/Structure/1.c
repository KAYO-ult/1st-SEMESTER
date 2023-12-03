#include<stdio.h>
int main () {

struct Mythical
{
    //char Name;
    int HP;
    float att;
};

struct Mythical Hydra;
printf("Enter HP and att = ");
scanf("%d%f",&Hydra.HP,&Hydra.att);

// Hydra.HP = 10000;
// Hydra.att = 66.7;     

// printf("Health = %d and Attact = %f", Hydra.HP,Hydra.att);
printf("Health = %d and Attact = %.2f", Hydra.HP,Hydra.att);

return 0;
}