#pragma once

#include "AWagon.hpp"
#include "ETypeWagon.hpp"

namespace simasciitrain
{
    class FreightWagon : public AWagon
    {
    public:
        explicit FreightWagon(int freightCount = 0)
            : AWagon(ETypeWagon::FREIGHT), freightCount_(freightCount) {}
        ~FreightWagon() override = default;

        [[nodiscard]] int getFreightCount() const { return freightCount_; }
        void setFreightCount(int count) { freightCount_ = count; }

    private:
        int freightCount_;
        void print(std::ostream& os) const override;
    };
}

