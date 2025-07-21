#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : total(0) {}

Contact PhoneBook::getContact(int index) const {
    return this->contacts[index];
}

void PhoneBook::addContact(Contact contact) {
    this->contacts[total++] = contact;
}

int PhoneBook::getContactCount() const {
    return (this->total);
}