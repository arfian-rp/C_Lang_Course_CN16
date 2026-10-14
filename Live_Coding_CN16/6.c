#include <stdio.h>

int cariMaksimal(int arr[], int ukuran) {
    int max = arr[0];
    
    for(int i = 1; i < ukuran; i++) {
        // TULIS KODEMU DI SINI (Update variabel max jika ditemukan angka lebih besar)
        
        
    }
    return max;
}

int main() {
    int dataSonar[5] = {120, 450, 95, 500, 310};
    
    int terdalam = cariMaksimal(dataSonar, 5);
    printf("Kedalaman maksimal: %d cm\n", terdalam); 
    
    
    return 0;
}