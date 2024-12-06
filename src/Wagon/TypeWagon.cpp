//
// Created by axelj on 06/12/2024.
//

#include "Wagon/TypeWagon.hpp"

using namespace simasciitrain;

const TypeWagon TypeWagon::PASSENGER("passager", 'o');
const TypeWagon TypeWagon::FREIGHT("marchandise", '#');
const TypeWagon TypeWagon::UTILITY("utilitaire", '@');


TypeWagon::TypeWagon(const std::string& name, char symbol)
    : name(name), symbol(symbol) {}

std::string TypeWagon::getName() const {
    return name;
}

char TypeWagon::getSymbol() const {
    return symbol;
}

