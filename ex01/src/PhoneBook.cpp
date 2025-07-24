#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : total(0), currentIndex(0) {}

Contact PhoneBook::getContact(int index) const {
    return this->contacts[index];
}

void PhoneBook::addContact(Contact contact) {
    this->contacts[currentIndex] = contact;
    if (this->total < 8)
        this->total++;
    this->currentIndex = (this->currentIndex + 1) % 8;
}

int PhoneBook::getContactCount() const {
    return (this->total);
}