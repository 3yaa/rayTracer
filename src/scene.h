#pragma once
#include "vector3d.h"
#include <iostream>
#include <vector>

struct Sphere {
    Vector3D origin;
    float radius;
    Vector3D color;

    Sphere() = default;
};

struct InScene {
    std::vector<Sphere> spheres;
};