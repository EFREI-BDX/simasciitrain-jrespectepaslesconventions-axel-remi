#pragma once

#include <ostream>

namespace simasciitrain
{
    class ITrain
    {
    public:
        virtual ~ITrain() = default;

        friend std::ostream &operator<<(std::ostream &os, const ITrain &train)
        {
            train.print(os);
            return os;
        }

    protected:
        virtual void print(std::ostream &os) const = 0;
    };
}
