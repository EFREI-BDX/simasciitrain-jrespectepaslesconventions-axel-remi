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

    private:
        int freightCount_;
        void print(std::ostream& os) const override {
            os << "[";
            for (int i = 0; i < freightCount_; ++i) {
                os << "#";
            }
            os << "]";
        }
    };
}

