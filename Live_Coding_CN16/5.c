#include <stdio.h>

typedef struct {
    int x;
    int y;
} Koordinat;

void updateSensor(Koordinat data) {
    data.x = 100;
    data.y = 200;
}

int main() {
    Koordinat posisiKapal = {0, 0};
    updateSensor(posisiKapal);
    printf("Posisi X: %d\n", posisiKapal.x);

    // Kenapa outputnya tetap 0?
    //PERBAIKI KODENYA!

    
    return 0;
}