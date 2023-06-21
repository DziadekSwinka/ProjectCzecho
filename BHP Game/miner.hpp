#ifndef MINER_HPP_INCLUDED
#define MINER_HPP_INCLUDED

#include <SFML/Graphics.hpp>

class miner
{
private:
    sf::RenderWindow &window;
    sf::Texture texture;
    sf::Sprite sprite;
public:
    miner(sf::RenderWindow &window1):window(window1)
    {
        texture.loadFromFile("gornik1.png");
        sprite.setTexture(texture);
    }
    void update()
    {
        window.draw(sprite);
    }
};

#endif // MINER_HPP_INCLUDED
