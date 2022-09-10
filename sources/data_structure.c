#include "../headers/data_structure.h"

float calc_output(Input input, Weight weight,int bias);





float calc_output(Input input, Weight weight,int bias)
{
    float sum = 0;

    // On vérifie que les tailles sont cohérentes
    if (input.size != weight.size) {
        printf("Error: input and weight size are not the same ! (%d != %d)\n", input.size, weight.size);
        return -1;
    }

    // On vérifie que les entrées et les poids sont bien initialisés
    if (input.data == NULL || weight.data == NULL) {
        printf("Error: input or weight is not initialized !\n");
        return -2;
    }

    // On calcule la somme pondérée
    for (int i = 0; i < input.size; i++) {
        sum += input.data[i] * weight.data[i];
    }
    return sum+bias;
}