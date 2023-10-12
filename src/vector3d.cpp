#include "vector3d.h"

Vector3D Vector3D::clamp() {
    float x = std::max(0.0f, std::min(this->x, 1.0f));
    float y = std::max(0.0f, std::min(this->y, 1.0f));
    float z = std::max(0.0f, std::min(this->z, 1.0f));

    return Vector3D(x, y, z);
}

float Vector3D::dotProduct(const Vector3D& v1, const Vector3D& v2) {
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z; 
}

Vector3D Vector3D::crossProduct(const Vector3D& v1, const Vector3D& v2) {
    float i = v1.y*v2.z - v1.z*v2.y;
    float j = -(v1.x*v2.z - v1.z*v2.x);
    float k = v1.x*v2.y - v1.y*v2.x;
    return Vector3D(i, j, k);
}