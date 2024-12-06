#include <iostream>
#include "Wagon/FreightWagon.hpp"
#include "Wagon/AWagon.hpp"
#include "Wagon/PassengerWagon.hpp"
#include "Wagon/UtilityWagon.hpp"
#include "Locomotive/ElectricLocomotive.hpp"
#include "Locomotive/GasolineLocomotive.hpp"
#include "Locomotive/Wagons.hpp"
#include "Locomotive/ALocomotive.hpp"
#include "Train/Train.hpp"

using namespace simasciitrain;

int main() {
    AbstractWagon *freightWagon = new FreightWagon(5);
    std::cout << *freightWagon << std::endl;            //	[#####]
    AbstractWagon *passengerWagon = new PassengerWagon(5);
    std::cout << *passengerWagon << std::endl;          //	[OOOOO]
    AbstractWagon *utilityWagon = new UtilityWagon();
    std::cout << *utilityWagon << std::endl;            //	[@]

    ALocomotive *electricLocomotive = new ElectricLocomotive();
    std::cout << *electricLocomotive << std::endl;        //	[E]>
    ALocomotive *gasolineLocomotive = new GasolineLocomotive();
    std::cout << *gasolineLocomotive << std::endl;        //	[G]>

    Wagons wagons;
    wagons.addWagon(freightWagon)->addWagon(passengerWagon)->addWagon(utilityWagon);
    std::cout << wagons << std::endl;                    //	[#####]-[OOOOO]-[@]

    Train aTrain(&wagons, electricLocomotive);
    std::cout << aTrain << std::endl;                    //	[#####]-[OOOOO]-[@]-[E]>

    Wagons wagons2;
    wagons2.addWagon(new FreightWagon(3))
        ->addWagon(new PassengerWagon(2))
        ->addWagon(new UtilityWagon())
        ->addWagon(new FreightWagon(1))
        ->addWagon(new PassengerWagon(5))
        ->addWagon(new PassengerWagon(5))
        ->addWagon(new PassengerWagon(5))
        ->addWagon(new PassengerWagon(5));
    Train anotherTrain(&wagons2, gasolineLocomotive);
    std::cout << anotherTrain << std::endl;                //	[###]-[OO]-[@]-[#]-[OOOOO]-[OOOOO]-[OOOOO]-[OOOOO]-[G]>

    return 0;
}
