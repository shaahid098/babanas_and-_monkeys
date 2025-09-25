#include <iostream>
#include "Banana.h"
#include "Monkey.h"




int main() {

    Banana *myBanana = new Banana("yellow", 118);
    std::cout <<"My Banana's weight is: " << myBanana->getWeight() << std::endl;
    std::cout <<"My Banana's color is: " << myBanana->getColor() << std::endl;
    std::cout <<"My Banana's calories is: " << myBanana->getCalories() << std::endl;

    Banana *rottenBanana= new Banana( "brown", 87);

    std::cout<<"Rotten Banana's weight is:" << myBanana->getWeight() << std::endl;
    std::cout<<"Rotten Banana's color is:" << myBanana->getColor() << std::endl;
    std::cout<<"Rotten Banana's calories is:" << myBanana->getCalories() << std::endl;

    Monkey *george = new Monkey();
    Monkey *bobo = new Monkey("Bobo");

    std::cout<<"The Default Monkey's name is: " << george->getName() << std::endl;
    std::cout<<"The Bobo's name is: " << bobo->getName() << std::endl;

    george->setName("george the Second");
    std::cout<<"george's name is now: " << george->getName() << std::endl;

    george->setName("Butthead"); //it won't compile
    std::cout<<"george's name is now: " << george->getName() << std::endl;

    std::cout<<george->getName()<<" has "<<george->getEnergy()<<std::endl;

    george->swingFromTrees();
    std:: cout<<george->getName()<<" has "<<george->getEnergy()<<" Energy after swing from trees." <<std::endl;

    if (george->isHungry()) {
        std::cout << george->getName()<<" is hungry"<<std::endl;

    }
    else {
        std::cout << george->getName()<<" is fine"<<std::endl;
    }
    george->giveBanana(rottenBanana);
    std::cout<<george->getName()<<" has "<<george->getEnergy()<<" Energy after being given a rotton banana."<<std::endl;

    if (george->isHungry()) {
        std::cout << george->getName()<<" is hungry"<<std::endl;

    }
    else{
        std::cout << george->getName()<<" is fine"<<std::endl;
    }

    return 0;



}
