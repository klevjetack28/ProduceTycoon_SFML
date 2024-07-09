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
        
        void setColor       (const sf::Color& color);
        void setTexture     (const sf::Texture& texture);
        void setTextureRect (const sf::IntRext& textureRect);
        void setPosition    (float x, float y);
        void setPosition    (const sf::Vector2f& position);
        void setRotation    (float angle);
        
        sf::Color&      getColor()          const;
        sf::Texture*    getTexture()        const;
        sf::IntRect&    getTextureRect()    const;
        sf::Vector2f&   getPosition()       const;
        float           getRotation()       const;


        void draw(); 
        void move(float vx, float vy);
        void move(sf::Vector2f position);


    private:
        sf::Sprite sprite;
};

#endif
