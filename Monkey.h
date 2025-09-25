#ifndef MONKEY_H
#define MONKEY_H

    #include <string>
#include "Banana.h"

/**
 * @class simulates the monkey
 */
class Monkey {

private:
    std::string name;
    int energy;

public:
    /**
     * initializes the monkey
     * @param name of monkey
     */
    Monkey();
    Monkey(std::string name);

    /**
     *
     * @return banana name
     */
    std::string getName()const ;

    /**
     *
     * @param name of monkey
     */
    void setName(std::string name);

    /**
     *
     * @return get the name of monkey
     */
    int getEnergy()const;

    /**
     * @returns the evergy level of the monkey
     */
    void swingFromTrees();

    /**
     *
     * @return swing from trees by the energy level
     */
    bool isHungry()const;

    /**
     *
     * @param checks weather monkey is hungry by energy level
     */
    void giveBanana(Banana *banana);
    /**
     *@param gives banana to monkey by the color
     */
};



#endif //MONKEY_H
