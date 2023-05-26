//
// Created by lou on 5/23/2023.
//

#include "Envio.h"
#include <string>
#include <iostream>

Envio::Envio() {
    this->receiverName = "Mirsh";
    this->senderName = "Lou";
    this->sendAddress = "Blv guido , Calle python 3, colonia torvalds";
    this->shipmentDetails = {{"Receiver Name: ", this->receiverName},
                             {"Sender Name: ",this->senderName},
                             {"Delivery Address: ", this->sendAddress}};
}

Envio::~Envio() {

}

std::string Envio::getReceiverName() {
    return this->receiverName;

}

void Envio::setReceiverName(std::string name) {
    this->receiverName = name;
}

std::string Envio::getSenderName() {
    return this->senderName;
}

void Envio::setSenderName(std::string name) {
        this->senderName = name;
}

std::string Envio::getSendAddress() {
    return this->sendAddress;
}

void Envio::setSendAddress(std::string addres) {
    this->sendAddress = addres;
}

void Envio::showShipmentInfo() {
    for (auto  x : this->shipmentDetails){
        std::cout << x.first << x.second <<std::endl;
    }
}
