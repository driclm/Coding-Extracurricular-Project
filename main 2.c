/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void checkStringLength(char str[]) {
    printf("Panjang string: %lu\n", strlen(str));
}

void countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    printf("Jumlah huruf vokal: %d\n", count);
}

void performMathOperation() {
    int choice;
    double num1, num2, result;
    
    
    printf("\nPilih operasi matematika:\n");
    printf("1. Penjumlahan dua bilangan\n");
    printf("2. Akar kuadrat\n");
    printf("3. Pangkat dua bilangan\n");
    printf("4. Keluar\n");
    printf("Masukkan pilihan (1/2/3/4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Masukkan dua angka (misal: 5 3): ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Hasil penjumlahan: %.2f\n", result);
            break;
        case 2:
            printf("Masukkan angka untuk akar kuadrat: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Tidak dapat menghitung akar kuadrat dari angka negatif!\n");
            } else {
                result = sqrt(num1);
                printf("Hasil akar kuadrat: %.2f\n", result);
            }
            break;
        case 3:
            printf("Masukkan dua angka (misal: 2 3 untuk 2^3): ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Hasil pangkat: %.2f\n", result);
            break;
        case 4:
            printf("Keluar dari program...\n");
            break;
        default:
            printf("Pilihan tidak valid. Coba lagi.\n");
            break;
    }
}

int main() {
    char input[100];
    int exitFlag = 0;

    while (!exitFlag) {
        printf("\nMasukkan teks: ");
        fgets(input, sizeof(input), stdin);  
        input[strcspn(input, "\n")] = 0;  

        checkStringLength(input);  
        countVowels(input);       

        performMathOperation();    

        char choice;
        printf("Apakah Anda ingin melanjutkan? (y/n): ");
        scanf(" %c", &choice); 
        if (choice == 'n' || choice == 'N') {
            exitFlag = 1;  
        }
    }

    return 0;
}