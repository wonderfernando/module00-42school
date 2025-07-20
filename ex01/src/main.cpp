#include <iostream>
#include <string>
#include "Contact.hpp"

int main(void)
{
    std::string linha;
    int exit = 1;
    Contact c("Fernando", "Silva", "Nando", "923456789", "Tem medo de gatos");
    c.show();
    while (exit)
    {     
        std::cout << "INSIRA O COMANDO: ";
        std::getline(std::cin, linha);
        if (!linha.compare("EXIT"))
            break;
        
        std::cout << "VOCE DIGITOU " << linha << std::endl;
    }
    
}