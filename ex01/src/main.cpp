#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

void print_contact(Contact contact, int index)
{
    std::cout << std::right << "Index: " << index << std::endl;;
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << std::right << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nick Name: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "darkest secret: " << contact.getNickname() << std::endl;

}
int is_valid(std::string str, int size)
{
    if (str[1] != '\0')
    {
        std::cout << "ARGUMENTO INVALIDO" << std::endl;
        return (0);
    }
    if (!std::isdigit(str[0]))
    {
        std::cout << "ARGUMENTO INVALIDO" << std::endl;
        return (0);
    }
    if (str[0] == '8')
        return 1;
    if ((str[0] >= '0' && str[0] <= '9'))
    {
        if ((str[0] - '0') > (size - 1))
        {
            std::cout << "index nao existe na lista" << std::endl;
            return (0);
        }
        return 1;
    }
    return 0;
}
int main(void)
{
    PhoneBook phone;
    std::string linha;
    std::string data;

    while (1)
    {

        std::cout << "INSIRA O COMANDO (ADD | SEARCH | EXIT): ";
        if (!std::getline(std::cin, linha))
        {
            std::cout << std::endl;
            break;
        }

        if (!linha.compare("ADD"))
        {
            Contact c;
            std::string data;

            std::cout << "Introduza seu Primeiro nome: ";
            if (!std::getline(std::cin, data))
            {
                std::cout << std::endl;
                break;
            }
            while (data.empty())
            {
                std::cout << "Primeiro nome não pode ser vazio. Tente novamente: ";
                if (!std::getline(std::cin, data))
                {
                    std::cout << std::endl;
                    break;
                }
            }
            c.setFirstName(data);

            std::cout << "Introduza seu Sobrenome: ";
            if (!std::getline(std::cin, data))
            {
                std::cout << std::endl;
                break;
            }
            while (data.empty())
            {
                std::cout << "Sobrenome não pode ser vazio. Tente novamente: ";
                if (!std::getline(std::cin, data))
                {
                    std::cout << std::endl;
                    break;
                }
            }
            c.setLastName(data);

            std::cout << "Introduza seu Nickname: ";
            if (!std::getline(std::cin, data))
            {
                std::cout << std::endl;
                break;
            }
            while (data.empty())
            {
                std::cout << "Nickname não pode ser vazio. Tente novamente: ";
                if (!std::getline(std::cin, data))
                {
                    std::cout << std::endl;
                    break;
                }
            }
            c.setNickname(data);

            std::cout << "Introduza seu Telefone: ";
            if (!std::getline(std::cin, data))
            {
                std::cout << std::endl;
                break;
            }
            while (data.empty())
            {
                std::cout << "Telefone não pode ser vazio. Tente novamente: ";
                if (!std::getline(std::cin, data))
                {
                    std::cout << std::endl;
                    break;
                }
            }
            c.setPhoneNumber(data);

            std::cout << "Introduza seu Segredo obscuro: ";
            if (!std::getline(std::cin, data))
            {
                std::cout << std::endl;
                break;
            }
            while (data.empty())
            {
                std::cout << "Segredo não pode ser vazio. Tente novamente: ";
                if (!std::getline(std::cin, data))
                {
                    std::cout << std::endl;
                    break;
                }
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
                std::string last_name = phone.getContact(i).getLastName();
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
            int count = phone.getContactCount();
            std::cout << "INSIRA O INDEX (8 para sair): ";
            if (!std::getline(std::cin, data))
            {
                std::cout << std::endl;
                break;
            }
            while (data.empty() || !is_valid(data, count))
            {
                std::cout << "INSIRA O INDEX (8 para sair): ";
                if (!std::getline(std::cin, data))
                {
                    std::cout << std::endl;
                    break;
                }
            }
            if (data[0] == '8')
                continue;
            print_contact(phone.getContact(data[0] - '0'), (data[0] - '0'));
            continue ;
        }
        if (!linha.compare("EXIT"))
            break;
    }
    return (0);
}