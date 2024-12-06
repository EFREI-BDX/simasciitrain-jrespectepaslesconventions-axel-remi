//
// Created by axelj on 06/12/2024.
//

#ifndef FREIGHTWAGON_HPP
#define FREIGHTWAGON_HPP

#include "AWagon.hpp"

namespace simasciitrain {
    class FreightWagon : public AbstractWagon {
    private:
        int freightCount_;

    public:
        explicit FreightWagon(int freightCount);
        int getFreightCount() const;
        void setFreightCount(int freightCount);
        void print(std::ostream& os) const override;
    };
}
#endif // FREIGHTWAGON_HPP
