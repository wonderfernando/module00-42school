#include "Contact.hpp"
#include <iostream>

 

Contact::Contact(std::string fn, std::string ln, std::string nick, std::string phone, std::string secret)
    : first_name(fn), last_name(ln), nickname(nick), phone_number(phone), darkest_secret(secret)
{};

Contact::Contact(){}

std::string Contact::getFirstName() const {
    return this->first_name;
}

std::string Contact::getLastName() const {
    return this->last_name;
}

std::string Contact::getNickname() const {
    return this->nickname;
}

std::string Contact::getPhoneNumber() const {
    return this->phone_number;
}

std::string Contact::getDarkestSecret() const {
    return this->darkest_secret;
}


void Contact::setFirstName(const std::string value) {
    this->first_name = value;
}

void Contact::setLastName(const std::string value) {
    this->last_name = value;
}

void Contact::setNickname(const std::string value) {
    this->nickname = value;
}

void Contact::setPhoneNumber(const std::string value) {
    this->phone_number = value;
}

void Contact::setSecret(const std::string value) {
    this->darkest_secret = value;
}