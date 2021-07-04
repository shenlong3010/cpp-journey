#include <iostream>

template <class T>
T getAnimal(int farmer_money, T animal_price) {
    return (farmer_money / animal_price);   
}

int main() {
    const int horse = 10;
    const int pig = 3;
    const float rabbit = 0.5f;
    int farmer = 100;
    //std::cout << "Total horses: " << getAnimal(farmer, horse) << '\n';
    //std::cout << "Total pigs: " << getAnimal(farmer, pig) << '\n';
    //std::cout << "Total rabbits: " << getAnimal(farmer, rabbit) << '\n';

    for (auto h = 0; h != 100; ++h)
        for (auto p = 0; p != 100; ++p)
            for (auto r = 0; r != 100; ++r)
                if ((h + p + r) == 100)
                    if (((10 * h) + (3 * p) + (0.5f * r)) == 100)
                        std::cout << "Found one!\n" << h << " horses " << p << " pigs " << r << " rabbits " << '\n';
}
