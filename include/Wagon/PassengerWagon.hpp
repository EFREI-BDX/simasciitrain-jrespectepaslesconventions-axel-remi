#pragma once

#include "AWagon.hpp"
#include "ETypeWagon.hpp"

namespace simasciitrain
{
    class PassengerWagon : public AWagon
    {
    public:
        PassengerWagon(int passengerCount = 0)
            : AWagon(ETypeWagon::PASSENGER), passengerCount_(passengerCount) {}
        ~PassengerWagon() override = default;

        int getPassengerCount() const { return passengerCount_; }
        void setPassengerCount(int count) { passengerCount_ = count; }

    private:
        int passengerCount_;
        void print(std::ostream& os) const override
        {
            os << "[";
            for (int i = 0; i < passengerCount_; ++i)
            {
                os << "O";
            }
            os << "]";
        }
    };
}
