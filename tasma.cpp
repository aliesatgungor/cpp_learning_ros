#include <iostream>
#include <cstdint>


int main(){

    uint8_t sayac = 250;

    for (int i = 0; i < 8; i++)
    {
        std::cout<<"sayac = "<<static_cast<int>(sayac)<<"\n";
        ++sayac;
    }
    



    return 0;
}