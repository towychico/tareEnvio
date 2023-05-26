//
// Created by lou on 5/23/2023.
//

#ifndef TAREAHERENCIA_ENVIO_H
#define TAREAHERENCIA_ENVIO_H
#include <string>
#include <vector>
#include <map>


class Envio {

private:
    std::string receiverName;
    std::string senderName;
    std::string sendAddress;

    std::map<std::string, std::string > shipmentDetails;

public:
    Envio();
    ~Envio();
    std::string getReceiverName();
    void setReceiverName(std::string name);
    std::string getSenderName();
    void setSenderName(std::string name);
    std::string getSendAddress();
    void setSendAddress(std::string address);
    void showShipmentInfo();



};


#endif //TAREAHERENCIA_ENVIO_H
