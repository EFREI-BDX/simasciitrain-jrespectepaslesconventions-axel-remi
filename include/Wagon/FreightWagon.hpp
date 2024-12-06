#pragma once

#include "AWagon.hpp"
#include "ETypeWagon.hpp"

namespace simasciitrain
{
    class FreightWagon : public AWagon
    {
    public:
        FreightWagon(int freightCount = 0)
            : AWagon(ETypeWagon::FREIGHT), freightCount_(freightCount) {}
        ~FreightWagon() override = default;

        int getFreightCount() const { return freightCount_; }
        void setFreightCount(int count) { freightCount_ = count; }

        void print(std::ostream& os) const override {
            os << "[";
            for (int i = 0; i < freightCount_; ++i) {
                os << "#";
            }
            os << "]";
        }

    private:
        int freightCount_;
    };
}

