#include <stdio.h>

void tukarNilai(int *a, int *b) {
    // (Lengkapi logika pertukaran)
    
    
}

int main() {
    int motorKiri = 100;
    int motorKanan = -50;
    
    printf("SEBELUM: Kiri = %d, Kanan = %d\n", motorKiri, motorKanan);
    tukarNilai(&motorKiri, &motorKanan);
    printf("SESUDAH: Kiri = %d, Kanan = %d\n", motorKiri, motorKanan);
    
    // OUTPUT HARUSNYA: SESUDAH: Kiri = -50, Kanan = 100
    return 0;
}