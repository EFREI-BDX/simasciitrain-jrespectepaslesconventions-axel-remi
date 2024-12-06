#pragma once

#include <string>

namespace simasciitrain
{
    class ETypeWagon {
    public:
        static const ETypeWagon PASSENGER;
        static const ETypeWagon FREIGHT;
        static const ETypeWagon UTILITY;
        ETypeWagon(const std::string& name, char symbol) : name_(name), symbol_(symbol) {}

        [[nodiscard]] const std::string& getName() const { return name_; }
        [[nodiscard]] char getSymbol() const { return symbol_; }

    private:
        std::string name_;
        char symbol_;
    };
}
