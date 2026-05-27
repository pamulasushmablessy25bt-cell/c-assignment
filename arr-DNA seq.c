#include <stdio.h>
#include <string.h>

int main() {
    char dna[100];
    int i, gCount = 0, cCount = 0;

    // Input DNA sequence
    printf("Enter DNA sequence (A, T, G, C): ");
    scanf("%s", dna);

    // Count frequency of G and C
    for(i = 0; i < strlen(dna); i++) {
        if(dna[i] == 'G')
            gCount++;
        else if(dna[i] == 'C')
            cCount++;
    }

    // Display results
    printf("Frequency of G = %d\n", gCount);
    printf("Frequency of C = %d\n", cCount);

    return 0;
}
outputp:
Enter DNA sequence (A, T, G, C): ATGCGA
Frequency of G = 2
Frequency of C = 1
