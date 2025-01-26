#include <iostream>
#include <input.h>

void pilihan(int choice){
    std::cout << "Pilihan menu! " << std::endl;
    std::cout << "1.Penjumlahan " << std::endl;
    std::cout << "2.Pengurangan " << std::endl;
    std::cout << "3.Perkalian " << std::endl;
    std::cout << "4.Pembagian " << std::endl;
    std::cout << "Masukkan pilihan: ";
    std::cin >> choice;

}


void Input(int a,int b){
    std::cout << "Masukkan nilai a: ";
    std::cin >> a;
    std::cout << "Masukkan nilai b: ";
    std::cin >> b;
}