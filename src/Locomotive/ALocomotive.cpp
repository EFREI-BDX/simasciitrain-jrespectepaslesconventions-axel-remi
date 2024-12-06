#include "Locomotive/ALocomotive.hpp"
#include "Locomotive/ETypeLocomotive.hpp"

namespace simasciitrain
{
    char ALocomotive::getSymbol() const
    {
        return typeLocomotive_ ? typeLocomotive_->getSymbol() : '?';
    }

    std::string ALocomotive::getType() const
    {
        return typeLocomotive_ ? typeLocomotive_->getName() : "Unknown Locomotive";
    }

    void ALocomotive::print(std::ostream& os) const
    {
        os << "[" << getSymbol() << "]>";
    }
}
