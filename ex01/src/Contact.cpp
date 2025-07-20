#include "Contact.hpp"

Contact::Contact(std::string fn, std::string ln, std::string nick, std::string phone, std::string secret)
    : first_name(fn), last_name(ln), nickname(nick), phone_number(phone), darkest_secret(secret) {};

void Contact::show() const {
    std::cout << "dados hi hi \n";
};