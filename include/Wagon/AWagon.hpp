#pragma once

#include "Train/ITrainElement.hpp"
#include "Wagon/ETypeWagon.hpp"

namespace simasciitrain
{
    class AWagon : public ITrainElement
    {
    public:
        explicit AWagon(const ETypeWagon& type) : typeWagon_(&type) {}
        ~AWagon() override = default;

        [[nodiscard]] char getSymbol() const override
        {
            return typeWagon_ ? typeWagon_->getSymbol() : '?';
        }

        [[nodiscard]] std::string getType() const override
        {
            return typeWagon_ ? typeWagon_->getName() : "Unknown Wagon";
        }

        void print(std::ostream& os) const override
        {
            os << "[ ]";
        }

    protected:
        const ETypeWagon* typeWagon_{};
    };
}
