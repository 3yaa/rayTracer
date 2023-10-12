#pragma once
#include "vector3d.h"
#include "scene.h"

class Ray {
public:
    Vector3D origin;
    Vector3D direction;
    Ray() {}
    Ray(const Vector3D& a, const Vector3D& b) { origin = a; direction = b; }
    static Vector3D rayHits(const Ray& rays, const float& radius);
};