#include "Entity.hpp"

Entity::Entity() {
    sprite.setPosition(sf::Vector2f(0.f, 0.f));
    sprite.setAngle(0.f);
    sf::Texture texture;
    if (!texture.loadFromFile("Resources/Images/Produce/Tomato.png")
        std::err << "Image failed to load";
    sprite.setTexture(texture);
}

Entity::Entity(float x, float y, float angle) {
    sprite.setPosition(sf::Vector2f(x, y));
    sprite.setAngle(angle);
    sf::Texture texture;
    if (!texture.loadFromFile("Resources/Images/Produce/Tomato.png")
        std::err << "Image failed to load";
    sprite.setTexture(texture);
}

Entity::Entity(const Entity& entity) {
    sprite.setPosition(entity.getPosition());
    sprite.setAngle(entity.getAngle());
    sf::Texture texture;
    if (!texture.loadFromFile("Resources/Images/Produce/Tomato.png")
        std::err << "Image failed to load";
    sprite.setTexture(entity.getTexture());
}

void Entity::setTexture(const sf::Texture& texture) {
    sprite.setTexture(texture);
}

void Entity::setTextureRect(const sf::IntRect& textureRect) {
    sprite.setTextureRect(textureRect);
}

void Entity::setColor(const sf::Color& color) {
    sprite.setColor(color);
}

void Entity::setPosition(float x, float y) {
    sprite.setPosition(x, y);
}

void Entity::setPosition(const sf::Vector2f position) {
    sprite.setPosition(position);
}

void Entity::setRotation(float angle) {
    sprite.setRotation(angle);
}

sf::Texture* Entity::getTexture() const {
    return sprite.getTexture(); 
}

sf::IntRect& Entity::getTextureRect() const {
    return sprite.getTextureRect();
}

sf::Color& Entity::getColor() const {
    return sprite.getColor();
}

sf::Vector2f& Entity::getPosition() const {
    return sprite.getPosition();
}

float Entity::getAngle() const {
    return sprite.getAngle();
}

void Entity::render() {
    
}

void Entity::update() {

}
