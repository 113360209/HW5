#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sumFrequency[13] = { 0 }; 
    int dice1, dice2, sum;
    int numRolls = 36000;

    srand(time(NULL));

    for (int i = 0; i < numRolls; i++) 
    {
        dice1 = rand() % 6 + 1; 
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        sumFrequency[sum]++;
    }

    printf("Sum\tFrequency\n");
    for (int i = 2; i <= 12; i++)
    {
        printf("%d\t%d\n", i, sumFrequency[i]);
    }

    system("pause");
    return 0;

}
