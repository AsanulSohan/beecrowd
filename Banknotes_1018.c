#include <stdio.h>

int main() {
    int note, total;
    
    // Reading the integer value
    scanf("%d", &note);
    
    // Calculating and printing the minimum number of each banknote needed
    total = note / 100;
    printf("%d nota(s) de R$ 100,00\n", total);
    note = note - (total * 100);

    total = note / 50;
    printf("%d nota(s) de R$ 50,00\n", total);
    note = note - (total * 50);

    total = note / 20;
    printf("%d nota(s) de R$ 20,00\n", total);
    note = note - (total * 20);

    total = note / 10;
    printf("%d nota(s) de R$ 10,00\n", total);
    note = note - (total * 10);

    total = note / 5;
    printf("%d nota(s) de R$ 5,00\n", total);
    note = note - (total * 5);

    total = note / 2;
    printf("%d nota(s) de R$ 2,00\n", total);
    note = note - (total * 2);

    total = note / 1;
    printf("%d nota(s) de R$ 1,00\n", total);

    return 0;
}
