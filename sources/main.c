#include "../headers/data_structure.h"


// commande de compilation : gcc -o main.exe main.c data_structure.c -lm
// NB : Faire une makefile pour compiler automatiquement

int main(int argc, char const *argv[])
{
    float output[3];

    // On initialise les entrées
    Input input;
    input.size = 3;
    input.data = malloc(input.size * sizeof(float));

    // On initialise les poids
    Weight weight[3];
    for (int i = 0; i < 3; i++)
    {
        weight[i].size = 3;
        weight[i].data = malloc(weight[i].size * sizeof(float));
    }

    // On initialise les entrées
    input.data[0] = 2.0;
    input.data[1] = 4.2;
    input.data[2] = 1.5;


    // On initialise les poids
    for (int i = 0; i < 3; i++)
    {
        printf("poids : %d [", i);
        for (int j = 0; j < 3; j++)
        {
            weight[i].data[j] = (float)rand()/(float)(RAND_MAX/10);
            printf("%f, ",weight[i].data[j]);
        }
        printf("]\n");
    }
    

    // On calcule la sortie
    printf("\noutput : [");
    for (int i = 0; i < 3; i++)
    {
        output[i] = calc_output(input, weight[i], rand() % 5 + i);
        printf("%f ",output[i]);
    }
    printf("]\n");
    
    return 0;
}
