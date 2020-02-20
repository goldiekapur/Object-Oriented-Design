#include "enums.h"

#include <string>

class Date;

class BookReservation
{
public:
    static BookReservation fetchReservation(std::string barcode);

private:
    Date m_creationDate;
    ReservationStatus m_status;
    std::string m_bookItemBarCode;
    std::string m_memberId;
};
