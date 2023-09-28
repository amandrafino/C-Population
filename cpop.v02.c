#include <stdio.h>

int getPopulationSize(const char* prompt, int min_value) {
    int size;
    do {
        printf("%s", prompt);
        scanf("%d", &size);
    } while (size < min_value);
    return size;
}

int calculateYears(int start_size, int end_size) {
    int years = 0;
    int current_population = start_size;
    
    while (current_population < end_size) {
        current_population += current_population / 3 - current_population / 4;
        years ++;
    }
    return years;
}

int main() {
    // Get starting population f/user
    int start_size = getPopulationSize("Enter starting population: ", 9);

    // Get end_size population size
    int end_size = getPopulationSize("Enter ending population: ", start_size );

   // Calculate the number of required years
   int years = calculateYears(start_size, end_size);

   // Print the result
   printf("Years: %d\n", years);

   return 0;
}
