#pragma once
#include <iostream>
#include <math.h>

class Vector3D {
public:
    //set up
    float x, y, z;
    Vector3D() {}
    Vector3D(float s_) : x(s_), y(s_), z(s_) {}
    Vector3D(float x1, float y1, float z1) : x(x1), y(y1), z(z1) {}
    //unary overload 
    inline Vector3D operator-() const { return Vector3D(-this->x, -this->y, -this->z); }
    //overload for vector and float
    inline Vector3D operator+(const float f) const { return Vector3D(this->x+f, this->y+f, this->z+f); }
    inline Vector3D operator-(const float f) { return Vector3D(this->x-f, this->y-f, this->z-f); }
    inline Vector3D operator*(const float f) const { return Vector3D(this->x*f, this->y*f, this->z*f); }
    inline Vector3D operator/(const float f) const { return Vector3D(this->x/f, this->y/f, this->z/f); }
    //overlord for vector and vector
    inline Vector3D operator+(const Vector3D& v2) const { return Vector3D(this->x+v2.x, this->y+v2.y, this->z+v2.z); }
    inline Vector3D operator-(const Vector3D& v2) const { return Vector3D(this->x-v2.x, this->y-v2.y, this->z-v2.z); }
    inline Vector3D operator*(const Vector3D& v2) const { return Vector3D(this->x*v2.x, this->y*v2.y, this->z*v2.z); }
    inline Vector3D operator/(const Vector3D& v2) const { return Vector3D(this->x/v2.x, this->x/v2.y, this->x/v2.z); }
    //operations
    inline float length() const { return sqrt(this->x*this->x + this->y*this->y + this->z*this->z); }
    inline Vector3D unitVector(const float& len) const { return Vector3D(this->x/len, this->y/len, this->z/len); }
    Vector3D clamp();
    static float dotProduct(const Vector3D& v1, const Vector3D& v2);
    static Vector3D crossProduct(const Vector3D& v1, const Vector3D& v2);
};