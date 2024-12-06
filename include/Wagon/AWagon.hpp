//
// Created by axelj on 06/12/2024.
//

#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H

#include <string>
#include <iostream>
#include "TypeWagon.hpp"


namespace simasciitrain {
    class AbstractWagon {

    private:
        const TypeWagon *typeWagon;

    public:
        explicit AbstractWagon(const TypeWagon *typeWagon);

        virtual ~AbstractWagon() = default;

        virtual void print(std::ostream &os) const = 0;

        [[nodiscard]] char getSymbol() const;
        [[nodiscard]] std::string getType() const;
    };

}
#endif // ABSTRACTWAGON_H

