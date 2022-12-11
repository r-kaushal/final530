#include "Car.h"

// ecs36b


using namespace jsonrpc;
using namespace std;


std::string chooseCrash(Motorcycle * av1, Motorcycle * av2){
    double score1 = 0.0;
    double score2 = 0.0;

    score1 += av1->getScore();
    score2 += av2->getScore();

    score1 += (av1->getPassengers() * 20);
    score2 += (av2->getPassengers() * 20);

    score1 += (100 - av1->getAge());
    score2 += (100 - av2->getAge());

    if (score1 < score2) {
        return av1->getName();
    }
    else {
        return av2->getName();
    }

}
