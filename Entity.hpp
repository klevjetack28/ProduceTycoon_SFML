#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <vector>
#include <memory>

using std::vector;
using std::make_shared;

class Entity {
    public:
        Entity();
        Entity(float x, float y, float angle);
        Entity(const Entity& entity);

        virtual ~Entity();
        
        void setColor(sf::Color color);
        void setTexture(sf::Texture texture);
        void draw(); 
        void move(float vx, float vy);

    private:
        float x;
        float y;
        float angle;
        sf::Sprite sprite;
};

#endif
