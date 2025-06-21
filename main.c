#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(1);

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    
    int sum = 0;

    int diceRolls[100];

    for (int i = 0; i < 100; i++) {
        diceRolls[i] = (rand() % 6) + 1;
        
        switch (diceRolls[i]) {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
        }

        sum += diceRolls[i];
    }

    printf("Ones: %d\n", one);
    printf("Twos: %d\n", two);
    printf("Threes: %d\n", three);
    printf("Fours: %d\n", four);
    printf("Fives: %d\n", five);
    printf("Sixes: %d\n", six);

    printf("Sum of all rolls: %d\n", sum);
    printf("Average: %.1f", sum/100.0);
    
    return 0;
}