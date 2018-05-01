#ifndef COLLISIONDETECTION_H
#define COLLISIONDETECTION_H

#include "gameobejct.h"

class CollisionDetection
{
public:
    CollisionDetection();
    bool check(GameObject *go1, GameObject *go2);
    bool outOfRange(GameObject *go1);
};

#endif // COLLISIONDETECTION_H