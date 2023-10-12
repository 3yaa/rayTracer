#include "ray.h"

Vector3D Ray::rayHits(const Ray& rays, const float& radius) {
    //for quadratic formula
    float a = Vector3D::dotProduct(rays.direction, rays.direction);
    float b = 2.0f * Vector3D::dotProduct(rays.origin, rays.direction);
    float c = Vector3D::dotProduct(rays.origin, rays.origin) - radius*radius;
    //determines the number of solutions
    float discriminant = b*b - 4.0f*a*c;
    if (discriminant < 0) {
        return Vector3D(0, 0, 0);
    }
    //determines the solution...uses the smallest of the solutions
    float hit = ((-b)-sqrt(discriminant))/(2*a);
    //ori+dir(h)
    Vector3D hitPos = rays.origin + rays.direction * hit;
    //normalize hitPos
    return hitPos;
}