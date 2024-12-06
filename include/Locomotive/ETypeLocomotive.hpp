#pragma once
#include <string>

namespace simasciitrain
{
    class ETypeLocomotive
    {
    public:
        static const ETypeLocomotive ELECTRIC;
        static const ETypeLocomotive GASOLINE;

        ETypeLocomotive(const std::string& name, char symbol)
            : name_(name), symbol_(symbol) {}

        [[nodiscard]] const std::string& getName() const { return name_; }
        [[nodiscard]] char getSymbol() const { return symbol_; }

    private:
        std::string name_;
        char symbol_;
    };
}
