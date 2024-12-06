//
// Created by axelj on 06/12/2024.
//

#ifndef UTILITYWAGON_HPP
#define UTILITYWAGON_HPP

#include "Wagon/AWagon.hpp"

namespace simasciitrain {
    class UtilityWagon : public AbstractWagon {
    public:
        // Constructeur
        UtilityWagon();

        // Méthode pour afficher les informations du wagon
        void print(std::ostream& os) const override;
    };
}

#endif // UTILITYWAGON_HPP
