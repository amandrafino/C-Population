#include <stdio.h>

// Prompt user for starting population from user
// .. less than 9 user is re-prompted

// Prompt user for ending population
// .. if less than starting population re-prompt user 

// Calculate: program should calculate the (integer) number
// .. of years required for population to reach at least
// .. the end_size
// .. print to terminal Years: n, where n is the number of years.

int main(void) {
    // Prompt for the beginning population
    int start_size;
    do {
        printf("Enter starting population size: ");
        scanf("%d", &start_size);
    } while (start_size < 9);

    // Prompt for the ending population
    int end_size;
    do {
        printf("Enter ending population: ");
        scanf("%d", &end_size);
    } while (end_size < start_size);

    // Initialize years and calculate population growth
    int years = 0;
    int current_population = start_size;

    while (current_population < end_size) {
        current_population += current_population / 3 - current_population / 4;
        years++;
    }
    // Print the number of year required
    printf("Years: %d\n", years);
}
