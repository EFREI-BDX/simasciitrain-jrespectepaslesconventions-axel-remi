#pragma once
#include <string>
#include <ostream>

namespace simasciitrain
{
    class ITrainElement
    {
    public:
        virtual ~ITrainElement() = default;
        [[nodiscard]] virtual char getSymbol() const = 0;
        [[nodiscard]] virtual std::string getType() const = 0;

        friend std::ostream &operator<<(std::ostream& os, const ITrainElement& elem)
        {
            elem.print(os);
            return os;
        }
    protected:
        virtual void print(std::ostream &os) const = 0;
    };
}
