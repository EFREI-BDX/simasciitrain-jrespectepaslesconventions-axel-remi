//
// Created by axelj on 06/12/2024.
//

#ifndef TYPEWAGON_H
#define TYPEWAGON_H

#include <string>

namespace simasciitrain {

    class TypeWagon {

    public:

        static const TypeWagon PASSENGER;
        static const TypeWagon FREIGHT;
        static const TypeWagon UTILITY;

        explicit TypeWagon(const std::string& name, char symbol);

        ~TypeWagon() = default;

        [[nodiscard]] std::string getName() const;
        [[nodiscard]] char getSymbol() const;

        private :
            std::string name;
        char symbol;
    };

}


#endif // TYPEWAGON_H
