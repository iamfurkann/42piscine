#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dizi[0];  // Dizi boyutu sıfır
    int *ptr = dizi; // ptr işaretçisi diziye işaret eder.

    // malloc(0) ile bellek ayırmaya çalışalım.
    ptr = (int *)malloc(0); 

    if (ptr == NULL) {
        printf("Bellek ayırılamadı.\n");
    } else {
        printf("Bellek başarıyla ayrıldı.\n");
    }

    // Bellek üzerinde işlem yapma girişimi
    ptr[2147483647] = 10;  // Bu geçersiz olur, çünkü bellek ayrılmadı

    return 0;
}

