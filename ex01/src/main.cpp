#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
int main(void)
{
    int exit = 3;
    PhoneBook phone;
    std::string linha;
    std::string data;

    while (exit)
    {

        std::cout << "INSIRA O COMANDO (ADD | SEARCH | EXIT): ";
        std::getline(std::cin, linha);
        if (!linha.compare("ADD"))
        {
            Contact c;
            std::string data;

            std::cout << "Introduza seu Primeiro nome: ";
            std::getline(std::cin, data);
            while (data.empty())
            {
                std::cout << "Primeiro nome não pode ser vazio. Tente novamente: ";
                std::getline(std::cin, data);
            }
            c.setFirstName(data);

            std::cout << "Introduza seu Sobrenome: ";
            std::getline(std::cin, data);
            while (data.empty())
            {
                std::cout << "Sobrenome não pode ser vazio. Tente novamente: ";
                std::getline(std::cin, data);
            }
            c.setLastName(data);

            std::cout << "Introduza seu Nickname: ";
            std::getline(std::cin, data);
            while (data.empty())
            {
                std::cout << "Nickname não pode ser vazio. Tente novamente: ";
                std::getline(std::cin, data);
            }
            c.setNickname(data);

            std::cout << "Introduza seu Telefone: ";
            std::getline(std::cin, data);
            while (data.empty())
            {
                std::cout << "Telefone não pode ser vazio. Tente novamente: ";
                std::getline(std::cin, data);
            }
            c.setPhoneNumber(data);

            std::cout << "Introduza seu Segredo obscuro: ";
            std::getline(std::cin, data);
            while (data.empty())
            {
                std::cout << "Segredo não pode ser vazio. Tente novamente: ";
                std::getline(std::cin, data);
            }
            c.setSecret(data);
            phone.addContact(c);
            std::cout << "Contacto adicionado com sucesso!\n";
        }
        if (!linha.compare("SEARCH"))
        {

            std::cout << "-------------------------------------------------" << std::endl;
            std::cout << std::setw(10) << std::right << "| Index |";
            std::cout << std::setw(10) << std::right << "First Name |";
            std::cout << std::setw(10) << std::right << "Last Name |";
            std::cout << std::setw(10) << std::right << "Nick Name |" << std::endl;
            std::cout << "-------------------------------------------------" << std::endl;

            for (int i = 0; i < phone.getContactCount(); i++)
            {
                std::string first_name = phone.getContact(i).getFirstName();
                std::string last_name =  phone.getContact(i).getLastName();
                std::string nick_name = phone.getContact(i).getNickname();
                if (first_name.length() > 10)
                    first_name = first_name.substr(0, 9) + ".";
                if (last_name.length() > 10)
                    last_name = last_name.substr(0, 9) + ".";
                if (nick_name.length() > 10)
                    nick_name = nick_name.substr(0, 9) + ".";
                std::cout << std::setw(10) << std::right << i << "|";
                std::cout << std::setw(10) << std::right << first_name << "|";
                std::cout << std::setw(10) << std::right << last_name << "|";
                std::cout << std::setw(10) << std::right << nick_name << "|" << std::endl;
                std::cout << "-------------------------------------------------" << std::endl;

            }
        }
    }
}