#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// int usia=20; // membuat sebuah variable

void cetak(int *x, int n);

int Jumlah(int a, int b){//PASS BY VALUE
    return a+b;
}

void tukarNilai(int *a, int *b) { //PASS BY REFERENCE
    // (Lengkapi logika pertukaran)
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int fibbonacci(int n){
    if(n==0 || n==1) return n;
    return fibbonacci(n-1)+fibbonacci(n-2);
}

bool XOR(bool A, bool B){
    return (!A && B) || (!B && A);
}

struct Mahasiswa{
    char nama[50];
    int usia;
    char nrp[10];
};

int main(){

    // 1. DASAR
    // printf("USia saya %d tahun\n", usia);

    // usia =usia + 1; // mengubah nilai variable

    //post increment 
    // printf("USia saya %d tahun\n", usia--);

    //pre increment 
    // printf("USia saya %d tahun\n", --usia);

    // usia/=5; //usia=usia+5;
    // printf("USia saya %d tahun\n", usia);

    // float a=10;
    // float b=3;
    // 3.3333 -> 3.0 (FLOAT)
    // printf("% .2f / %.2f = %.2f\n", a, b, a/b);


    //LOGIKA
    // int x=10;

    // if(){
    //     printf("x adalah 0\n");
    // }else{
    //     printf("x bukan 0\n");
    // }
    // printf("%d",x==10); //0-> FALSE, 1->TRUE

    //<=,<,>,>=,==, != OPERATOR PERBANDINGAN
    //&&, ||, !; AND, OR, NOT. Operator Logika
    //A and B=A.B
    //A or B=A+B
    //not A=!A
// xor -> exclusive or, XOR(A,B)= !A.B + !B.A
    // bool x=false;
    // printf("%d", !x);



    //2. Percabangan, Perulangan, Array, String
    // int x=10;
    // if(x>0){ 
    //     printf("POSITIF\n");
    // }else if(x<0){
    //     printf("NEGATIF\n");
    // }else{
    //     printf("NOL\n");
    // }

    // switch (x){
    // case 0:
    //     printf("NOL\n");
    //     break;

    // default:
    //     printf("Bukan NOL\n");
    //     break;
    // }

// F=SIGMA(i=0 to 100)i;
    // int F=0;
    //BREAK
    // for(int i=0;i<=10;i++){
    //     if(i==6) break;
    //     printf("%d\n", i);
    // }
    // printf("SELESAI\n");

    //CONTINUE
    // for(int i=0;i<=10;i++){
    //     if(i<5) continue;
    //     printf("%d\n", i);
    // }
    // printf("SELESAI\n");
    
    // int usiaTeman[5]={20, 21, 22, 23, 24};

    // usiaTeman[0]=21;

    // for(int i=0;i<5;i++){
    //     printf("%d, ", usiaTeman[i]);
    // }

    // char nama1[20]="Arfian";
    // char nama2[20]="Arfiany";
    
    // if(strcmp(nama1, nama2) == 0){
    //     printf("SAMA\n");
    // }
    // printf("SAMA, %d\n", strcmp(nama2, nama1));





        // cetak(20);

    // int hasil=Jumlah(10, 20);
    // printf("Hasil: %d\n", hasil);
    
    // bool result = XOR(true, true);
    // printf("XOR: %d\n", result);

    // int fib = fibbonacci(10);

    // printf("Fibbonacci ke-10: %d\n", fib);


    //POINTER

    // int num = 10;
    // int *ptr = &num;
    // printf("Nilai awal: %d\n", num);

    // num=20;

    // printf("Nilai melalui pointer: %d\n", *ptr);
    // printf("Nilai akhir: %d\n", num);

    // int arr[5] = {1, 2, 3, 4, 5};
    // cetak(&arr[0], 5);
    // printf("%p\n", arr);
    // printf("%p\n", &arr[0]);


    //STRUCT
    struct Mahasiswa mhs1;
    struct Mahasiswa mhs2;

    strcpy(mhs1.nama, "Arfian");
    mhs1.usia =17;
    strcpy(mhs1.nrp, "5022251028");
    strcpy(mhs2.nama, "Yosua");
    mhs2.usia = 20;
    strcpy(mhs2.nrp, "5022251100");

    struct Mahasiswa mhss[2]={
        mhs1,mhs2
    };

    for(int i=0;i<2;i++){
        printf("Nama: %s\n", mhss[i].nama);
        printf("Usia: %d\n", mhss[i].usia);
        printf("NRP: %s\n", mhss[i].nrp);
    }
    return 0;
}

// void cetak(int *x, int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d, ", *(x + i));
//     }
// }




// void cetak(int x){
//     printf("USia saya %d tahun\n", x);
// }


