//
// Created by axelj on 06/12/2024.
//

#ifndef PASSENGERWAGON_HPP
#define PASSENGERWAGON_HPP

#include "AWagon.hpp"

namespace simasciitrain {
    class PassengerWagon : public AbstractWagon {
    private:
        int passengerCount_;

    public:
        PassengerWagon(int passengerCount);

        int getPassengerCount() const;

        void setPassengerCount(int passengerCount);

        void print(std::ostream& os) const override;
    };
}

#endif // PASSENGERWAGON_HPP
