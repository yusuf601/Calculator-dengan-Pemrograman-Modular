#include "operations.h"
#include "input.h"
#include "output.h"
#include <iostream>
int main{
    //menginput nilai
    Input();
    switch(pilihan()){
        case 1: {
            tambah();
            outputPenjumlahan();
        }
        case 2:{
            kurang();
            outputPengurangan();
        }
        case 3:{
            kali();
            outputPerkalian;
        }
        case 4:{
            bagi();
            outputPembagian();
        }
        default:
            std::cout << "Anda melakukan kesalahan input! " << std::endl;
    }
        

    return 0;
}