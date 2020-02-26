#include <Enums.h>

class Member;

class Notification
{
public:
    Notification(NotificationType type) : m_type(type){}
    virtual bool send (Member member) = 0;
private:
    NotificationType m_type;
};

class EmailNotification : public Notification
{
public:
    EmailNotification() : Notification(NotificationType::EMAIL){}
    bool send (Member member) override;
};

class PhoneNotification : public Notification
{
public:
    PhoneNotification() : Notification(NotificationType::PHONE){}
    bool send (Member member) override;
};

class SmsNotification : public Notification
{
public:
    SmsNotification() : Notification(NotificationType::SMS){}
    bool send (Member member) override;
};
