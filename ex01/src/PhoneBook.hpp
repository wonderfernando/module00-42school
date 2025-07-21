#ifndef PHONE_H
    #define PHONE_H
#include "Contact.hpp"

class PhoneBook
{

private:
    int total;
    Contact contacts[8];

public:
    PhoneBook();
    void addContact(Contact contact);
    Contact getContact(int index) const;
    int getContactCount() const;
};

#endif