#pragma once

#include "ETypeLocomotive.hpp"
#include "Train/ITrainElement.hpp"

namespace simasciitrain
{
    class ETypeLocomotive;

    class ALocomotive : public ITrainElement
    {
    public:
        explicit ALocomotive(const ETypeLocomotive& type) : typeLocomotive_(&type) {}
        ~ALocomotive() override = default;

        [[nodiscard]] char getSymbol() const override;
        [[nodiscard]] std::string getType() const override;

    private:
        const ETypeLocomotive *typeLocomotive_;
        void print(std::ostream& os) const override;
    };

}
