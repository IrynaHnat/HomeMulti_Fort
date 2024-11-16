#include "CommonIncludes.h"
#include"Library.h"

Fortress::Fortress(int arrows, int stones, int wallThickness, int gateCondition)
    : tower("Arrows", arrows), catapult("Stones", stones),
    wallThickness(wallThickness), gateCondition(gateCondition) {}

void Fortress::defend() {
    cout << "Defending the fortress!" <<endl;
    tower.shotFromArcher();
    tower.shotFromArcher();
    tower.shotFromArcher();
    tower.shotFromRange();
    tower.shotFromRange();
    catapult.shot();
}
