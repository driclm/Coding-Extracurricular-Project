/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int Num1;
    int Num2;
    int Operasi;
    printf("Masukkan Angka Pertama: ");
    scanf("%d", &Num1);

    printf("Masukkan Angka Kedua: ");
    scanf("%d", &Num2);

    printf("Pilih Operasi (1=+,2=-,3=*,4=/): ");
    scanf("%d", &Operasi);
    
    if(Operasi==1){
            printf("Hasil = %d\n", Num1+Num2);
        }
        else if(Operasi==2){
            printf("Hasil = %d\n", Num1-Num2);
        }
        else if(Operasi==3){
            printf("Hasil = %d\n", Num1*Num2);
        }
        else if(Operasi==4){
            printf("Hasil = %d\n", Num1/Num2);
        }

    return 0;
}
