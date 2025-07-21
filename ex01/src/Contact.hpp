#ifndef CONTACT_H
#define CONTACT_H

#include <string>
class Contact
{

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
    Contact(std::string fn, std::string ln, std::string nick, std::string phone, std::string secret);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
    void setFirstName(const std::string fn);
    void setLastName(const std::string ln);
    void setNickname(const std::string nk);
    void setPhoneNumber(const std::string pn);
    void setSecret(const std::string sec);
};

#endif
