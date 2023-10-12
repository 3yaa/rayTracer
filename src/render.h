#pragma once

#include <SFML/Graphics.hpp>
#include "ray.h"

struct Vector2D {
    int x, y;
    Vector2D(int x_, int y_) : x(x_), y(y_) {}
};

class Renderer {
public:
    Renderer() = default;

    void scaleScreen(InScene& inScene, sf::Image& img, const Vector2D& res);
    //void setPixel(Image& img, const Vector2f& coord);
};