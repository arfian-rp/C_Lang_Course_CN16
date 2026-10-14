// Di kapal ASV,

// jika suhu komponen panas, kita menyalakan kipas.
// Tapi kalau kita hanya pakai 1 batas (misal suhu > 40),
// kipas akan nyala-mati berulang kali
// dengan cepat (osilasi) saat suhu tepat di 40.
//Histeresis mencegah hal ini.
// Instruksi ke Kandidat: "Lengkapi fungsi kontrolKipas.
// Syaratnya: Jika suhu > 40, kipas ON (1).
// Jika suhu < 35, kipas OFF (0).
// Jika suhu ada di rentang 35 hingga 40, status kipas TETAP (tidak berubah)."

#include <stdio.h>

int statusKipas = 0; // 0 = OFF, 1 = ON

void kontrolKipas(int suhu) {
    //(Gunakan logika if-else)
    
    
}

int main() {
    kontrolKipas(42); 
    printf("Suhu 42 -> Kipas: %d (Ekspektasi: 1)\n", statusKipas); 
    
    kontrolKipas(38); 
    printf("Suhu 38 -> Kipas: %d (Ekspektasi: 1)\n", statusKipas); 
    
    kontrolKipas(34); 
    printf("Suhu 34 -> Kipas: %d (Ekspektasi: 0)\n", statusKipas); 
    
    kontrolKipas(38); 
    printf("Suhu 38 -> Kipas: %d (Ekspektasi: 0)\n", statusKipas); 
    
    return 0;
}