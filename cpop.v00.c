#include <stdio.h>

int main(void) {
    // Prompt for beginning population
    int start_size;
    do {
        printf("Enter starting population size: ");
        scanf("%d", &start_size);
    } while (start_size < 9);

    // Prompt for ending population
    int end_size;
    do {
        printf("Enter ending population: ");
        scanf("%d", &end_size);
    } while(end_size < start_size);

    // Initialize years and calculate population growth
    int years = 0;
    int current_population = start_size;

    while (current_population < end_size) {
        current_population += current_population / 3 - current_population / 4;
        years++;

    }
    // Print the number of years required
    printf("Years: %d\n", years);

    return 0;
}
