#include "render.h"

void Renderer::scaleScreen(InScene& inScene, sf::Image& img, const Vector2D& res) {
    //sphere
    Sphere sphere1;
    sphere1.origin = Vector3D(0.0f, 0.0f, 1.5f);
    sphere1.radius = 0.5f;
    
    Vector3D coord;
    //Vector3D someRGBVec;
    Vector3D lightDir(-1, -1, -1);
    lightDir = lightDir.unitVector(lightDir.length());

    for (int y = 0; y < res.y; y++) {
        for (int x = 0; x < res.x; x++) {
            //scale screen
            coord.x = float(x) / float(res.x);
            coord.y = float(y) / float(res.y);
            coord = (coord * 2.0f) - 1.0f;
            coord.x *= float(res.x)/float(res.y);
            //
            Ray rays(sphere1.origin, Vector3D(coord.x, coord.y, -1.0f));
            //rays.origin = rays.origin-Vector3D(0, 0, 0);
            //std::cout << rays.origin.x << " " << rays.origin.y << " " << rays.origin.z << " " << std::endl;
            Vector3D normalHit = Ray::rayHits(rays, sphere1.radius);
            normalHit = normalHit.unitVector(normalHit.length());
            //equivelent to cos(angle) 
            float light = std::max(Vector3D::dotProduct(normalHit, -lightDir), 0.0f);
            //scale it 0,1 from -1,1
            normalHit = (normalHit*0.5f+0.5f);

            normalHit = normalHit.clamp()*light;
            sf::Color color(normalHit.x*255, normalHit.y*255, normalHit.z*255, 255); 
            
            img.setPixel(x, res.y-y, color);
        }
    }
}