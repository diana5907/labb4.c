#include <stdio.h>

int main() {
    //Спочатку визначаються змінні product і i.
    int product = 1;
    int i = 22;
    //Потім цикл while виконується, поки i менше або дорівнює 100. 
    while (i <= 100) {
        if (i % 7 == 0) {
            product *= i;
        }
        i++;
    }
    printf("Добуток всіх чисел, кратних 7, у діапазоні (21;100]: %d\n", product);
    return 0;
}