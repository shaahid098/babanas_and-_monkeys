#include <string>

#ifndef BANANA_BANANA_H
#define BANANA_BANANA_H

/**
 * @class simulates a banana
 */
class Banana {
private:
    std::string color;
    int weight;
    const float CALORIES_PER_GRAM= 2.5;

public:
    /**
     * Initializes a banana
     * @param color The color of the banana skin
     * @param weight The weight of the banana in grams
     */
    Banana(std::string color, int weight);

    /**
     *
     * @return the banana weight
     */
    int getWeight() const;

    /**
     *
     * @return the banana calories provuided by eating the banana
     */
    std::string getColor() const;

    /**
     *
     * @return returns the color
     */
    float getCalories() const;
};

#endif //BANANA_BANANA_H
