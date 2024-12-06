#pragma once

#include "Train/ITrainElement.hpp"
#include "Wagon/ETypeWagon.hpp"

namespace simasciitrain
{
    class AWagon : public ITrainElement
    {
    public:
        AWagon(const ETypeWagon& type) : typeWagon_(&type) {}
        virtual ~AWagon() = default;

        [[nodiscard]] char getSymbol() const override {
            return typeWagon_ ? typeWagon_->getSymbol() : '?';
        }

        [[nodiscard]] std::string getType() const override {
            return typeWagon_ ? typeWagon_->getName() : "Unknown Wagon";
        }

        // Par défaut, la méthode print n'affiche rien de spécifique,
        // elle sera redéfinie dans les classes concrètes.
        void print(std::ostream& os) const override {
            os << "[ ]";
        }

    protected:
        const ETypeWagon* typeWagon_{};
    };
}
