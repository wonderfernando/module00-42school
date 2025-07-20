#include <iostream>
class Contact
{
public:
    Contact(std::string fn, std::string ln, std::string nick, std::string phone, std::string secret);
    void show() const;
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};