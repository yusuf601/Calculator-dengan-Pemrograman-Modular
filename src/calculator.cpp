#include "../include/operations.h"
#include "../include/input.h"
#include "../include/output.h"
int main(){
    int a,b,choice;
    //menginput nilai
    pilihan(choice)
    Input(a,b);
    switch(pilihan()){
        case 1: {
            outputPenjumlahan(tambah(a,b));
            break;
        }
        case 2:{
            outputPengurangan(kurang(a,b));
            break;
        }
        case 3:{
            outputPerkalian(kali(a,b));
            break;
        }
        case 4:{
            outputPembagian(bagi(a,b));
            break;
        }
        default:
            std::cout << "Anda melakukan kesalahan input! " << std::endl;
            break;
    }
        
    std::cin.get();
    return 0;
}