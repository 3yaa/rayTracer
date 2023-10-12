#include <iostream>
#include "render.h"
#include "scene.h"

int main() {
    const Vector2D res(1250, 750);
    sf::RenderWindow window(sf::VideoMode(res.x, res.y), "Ray Tracer");
    sf::Image image; image.create(res.x, res.y);
    sf::Texture texture;
    sf::Sprite sprite;

    InScene inScene;

    Renderer renderer; 
    renderer.scaleScreen(inScene, image, res);

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) window.close();

        }
        texture.loadFromImage(image);
        sprite.setTexture(texture);
        window.clear();
        window.draw(sprite);
        window.display();
    }
}